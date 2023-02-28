#pragma once
#include "foo.h"

class bar : public foo {
    public:

        bar(int i=0) : foo(i) {}

        virtual int add(int i);

};
