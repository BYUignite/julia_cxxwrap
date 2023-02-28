cmake_minimum_required(VERSION 3.15)

project(hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

#################################################################3

set(CMAKE_PREFIX_PATH "/Users/dol4/.julia/artifacts/434257acf70ce7407e3946f2c8452e814d7cca64")
find_package(JlCxx)

#################################################################3

add_library(hello SHARED hello.cc)

target_link_libraries(hello JlCxx::cxxwrap_julia)

#################################################################3

set(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}")
install(TARGETS hello
        LIBRARY DESTINATION lib)
