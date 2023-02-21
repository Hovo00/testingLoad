#include "DLLoader.hpp"

dlloader::DLLoader::DLLoader(std::string const &pathToLib,
			std::string const &allocClassSymbol,
			std::string const &deleteClassSymbol) :
			  _handle(nullptr), _pathToLib(pathToLib),
			  _allocClassSymbol(allocClassSymbol),
        	  _deleteClassSymbol(deleteClassSymbol) {
}
void dlloader::DLLoader::DLOpenLib() {
	if (!(_handle = dlopen(_pathToLib.c_str(), RTLD_NOW | RTLD_LAZY))) {
		std::cerr << dlerror() << std::endl;
	}
}
void dlloader::DLLoader::DLCloseLib(){
	if (dlclose(_handle) != 0) {
		std::cerr << dlerror() << std::endl;
	}
}