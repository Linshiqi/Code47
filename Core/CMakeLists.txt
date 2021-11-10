# CMakeList.txt : CMake project for Code47, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

aux_source_directory(. SRC_LIST)
aux_source_directory(../math MATH_SRC_LIST)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif()

# Add source to this project's executable.
add_executable (Code47 ${SRC_LIST} ${MATH_SRC_LIST}) 

# TODO: Add tests and install targets if needed.

