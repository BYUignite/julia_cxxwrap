### Call C++ classes with inheritance from Julia using CxxWrap
* See the readme for cxxwrap_class_inherit.
* Extend cxxwrap_class_inherit: 
    * Add another function setvec that takes a reference to stl::vector and edits it.

### build
You'll need to change the ```CMAKE_PREFIX_PATH``` in the ```CMakeLists.txt``` file.

```
mkdir build
cd build
cmake ..
make
make install
cd ..
```

### run
```
julia driver.jl
```
