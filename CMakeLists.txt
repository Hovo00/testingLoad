cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 20)

project(expression_evaluator LANGUAGES CXX)

add_subdirectory(libs)
add_subdirectory(src/DLLoader)

add_executable(expression_evaluator main.cpp)

target_include_directories(expression_evaluator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
                                                       ${CMAKE_CURRENT_SOURCE_DIR}/libs)
target_link_libraries(expression_evaluator PUBLIC DLLoader)
target_compile_options(${PROJECT_NAME} PRIVATE -g)

