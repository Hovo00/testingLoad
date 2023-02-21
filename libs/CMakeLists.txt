set(CMAKE_CXX_STANDARD 20)
add_library(Float SHARED FloatOperations.cpp OperationInfo.cpp StringToFloat.cpp Validators.cpp Float.cpp)
target_include_directories(Float PUBLIC ../include
                           ${CMAKE_CURRENT_SOURCE_DIR}/)
target_compile_options(Float PUBLIC -g)
