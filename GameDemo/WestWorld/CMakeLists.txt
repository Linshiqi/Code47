cmake_minimum_required(VERSION 3.8)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(src SRC_LIST)

include_directories(include)

add_compile_options(-std=c++11 -Wall)

add_executable(WestWorld ${SRC_LIST})
