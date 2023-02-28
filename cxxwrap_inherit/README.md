### Call C++ classes with inheritance from Julia using CxxWrap
* Extended simpler example cxxwrap_class that I did earlier, which was
based on [this video](https://youtu.be/u7IaXwKSUU0?t=120).
* Based on [this example](https://github.com/JuliaInterop/libcxxwrap-julia/blob/main/examples/inheritance.cpp) for the c++ side,
* And on [this](https://github.com/JuliaInterop/CxxWrap.jl/blob/main/test/inheritance.jl) for the corresponding julia side,
* Which were linked from the [main page](https://github.com/JuliaInterop/CxxWrap.jl) for cxxwrap.
* Note, these examples are pretty comprehensive for using inheritance with shared_ptr, referrences, etc. The links combine two examples into one, which is a little distracting. My example is a complete build, but is minimal.


Create a static library ```libfoobar.a```
* ```foo.h, foo.cc, bar.h, bar.cc```
* Treat this as if it was some already existing external library.

Then create a wrapper library for that ```libfoobar_w.dylib```
* ```foobar_w.cc```

Then create the julia module
* ```foobar.jl```

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
