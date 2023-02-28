cmake_minimum_required(VERSION 3.15)

project(cxxlib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

#################################################################3

set(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}")

#################################################################3

add_library(foobar STATIC foo.cc foo.h bar.cc bar.h)

install(TARGETS foobar
        LIBRARY DESTINATION lib)

#################################################################3

add_executable(test.x test.cc)
target_link_libraries(test.x foobar)
install(TARGETS test.x DESTINATION "${PROJECT_SOURCE_DIR}")

#################################################################3
# set the CMAKE_PREFIX_PATH to either ...artifacts... to use the cxxwrap installed as a JLL package (e.g. with julia's Pkg.add("CxxWrap"))
# or to the build folder when installing/building cxxwrap as described here: https://github.com/JuliaInterop/libcxxwrap-julia
# in the latter case, I named the folder build not libcxxwrap-julia-build (which was in the instructions).
# for the ...artifacts... path, get it as: julia> using CxxWrap; julia> CxxWrap.prefix_path(); see https://github.com/JuliaInterop/CxxWrap.jl

#set(CMAKE_PREFIX_PATH "/Users/dol4/.julia/artifacts/434257acf70ce7407e3946f2c8452e814d7cca64")
set(CMAKE_PREFIX_PATH "/Users/dol4/codes/cxxwrap_julia/build")
find_package(JlCxx)

add_library(foobar_w SHARED foobar_w.cc)
target_include_directories(foobar_w PRIVATE "${PROJECT_SOURCE_DIR}")
target_link_libraries(foobar_w foobar JlCxx::cxxwrap_julia)

install(TARGETS foobar_w
        LIBRARY DESTINATION lib)
