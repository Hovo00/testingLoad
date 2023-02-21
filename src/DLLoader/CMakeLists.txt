set(CMAKE_CXX_STANDARD 20)
add_library(DLLoader STATIC DLLoader.cpp)
target_include_directories(DLLoader PUBLIC ../../include/
                           ${CMAKE_CURRENT_SOURCE_DIR}/)
target_compile_options(DLLoader PUBLIC -g)
