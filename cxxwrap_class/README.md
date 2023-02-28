### Call C++ class from Julia using CxxWrap
Example based on [this video](https://youtu.be/u7IaXwKSUU0?t=120)

Create a static library ```libfoo.a```
* ```foo.h, foo.cc```
* Treat this as if it was some already existing external library.

Then create a wrapper library for that ```libfoo_w.dylib```
* ```foo_w.cc```

Then create the julia module
* ```foo.jl```

This julia module can then be loaded and run in the driver
* ```driver.jl```

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
