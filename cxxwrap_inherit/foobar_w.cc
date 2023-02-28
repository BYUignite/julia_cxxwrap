#include "foo.h"
#include "bar.h"

//////////////////////////////////////////////////////////////////

#include "jlcxx/jlcxx.hpp"

namespace jlcxx {

    template<> class SuperType<bar> { public: typedef foo type; };

}

JLCXX_MODULE define_foobar_module(jlcxx::Module &mod) {

    mod.add_type<foo>("foo")
        .constructor<int>()
        .method("add", &foo::add);

    mod.add_type<bar>("bar", jlcxx::julia_base_type<foo>())
        .constructor<int>();
        //.method("add", &bar::add);       // works but not needed
}

