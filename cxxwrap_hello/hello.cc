#include <string>

std::string hello() {
   return "hello, world";
}

///////////////////////////////////////////////////////

#include "jlcxx/jlcxx.hpp"

JLCXX_MODULE define_julia_module(jlcxx::Module& mod) {
  mod.method("hello", &hello);
}
