#ifndef IDLLOADERMOADER_HPP
#define IDLLOADERMOADER_HPP
#include <functional>
#include <iostream>
#include <dlfcn.h>
#include "Operand.hpp"

namespace dlloader
{
	class DLLoader {
	private:
		void			*_handle;
		std::string		_pathToLib;
		std::string		_allocClassSymbol;
		std::string		_deleteClassSymbol;

	public:
		DLLoader(std::string const &pathToLib,
				 std::string const &allocClassSymbol = "getCreator",
				 std::string const &deleteClassSymbol = "deleter");

		~DLLoader() = default;

	void DLOpenLib();

	void DLCloseLib();
	std::shared_ptr<Operand> DLGetInstance(const std::string& value){
		using allocClass = Operand *(*)(const std::string&);
		using deleteClass = void (*)(Operand *);
		//using deleteClass = std::function<void(Operand*)>;
		auto allocFunc = reinterpret_cast<allocClass>(dlsym(_handle, _allocClassSymbol.c_str()));
		auto deleteFunc = reinterpret_cast<deleteClass>(dlsym(_handle, _deleteClassSymbol.c_str()));

		if (!allocFunc || !deleteFunc) {
			DLCloseLib();
			std::cerr << dlerror() << std::endl;
		}

		return std::shared_ptr<Operand>(allocFunc(value), [deleteFunc](Operand *p){ deleteFunc(p); });
	}

	const Operand* (*DLGetCreator())(const std::string&) {
		using allocClass = const Operand *(*)(const std::string&);
		auto allocFunc = reinterpret_cast<allocClass>(dlsym(_handle, _allocClassSymbol.c_str()));

		if (!allocFunc) {
			DLCloseLib();
			std::cerr << dlerror() << std::endl;
		}
		return allocFunc;
	}
	std::function<void(Operand*)> DLGetDeleter() {
		using deleteClass = void (*)(Operand *);
		auto deleteFunc = reinterpret_cast<deleteClass>(dlsym(_handle, _deleteClassSymbol.c_str()));

		if (!deleteFunc) {
			DLCloseLib();
			std::cerr << dlerror() << std::endl;
		}
		return deleteFunc;
	}
};
}

#endif