#include "foo.h"
#include "bar.h"
#include <vector>

//////////////////////////////////////////////////////////////////

#include "jlcxx/jlcxx.hpp"

namespace jlcxx {

    template<> class SuperType<bar> { public: typedef foo type; };

}

JLCXX_MODULE define_foobar_module(jlcxx::Module &mod) {

    mod.add_type<foo>("foo")
        .constructor<int>()
        .method("add",    &foo::add)
        .method("setvec", &foo::setvec);

    mod.add_type<bar>("bar", jlcxx::julia_base_type<foo>())
        .constructor<int>();
}

