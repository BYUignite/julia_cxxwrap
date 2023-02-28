#include "foo.h"

//////////////////////////////////////////////////////////////////

#include "jlcxx/jlcxx.hpp"

JLCXX_MODULE define_julia_module(jlcxx::Module &mod) {

    mod.add_type<foo>("foo")
        .constructor<int>()
        .method("add", &foo::add);
}

