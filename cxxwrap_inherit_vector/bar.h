#pragma once
#include "foo.h"
#include <vector>

class bar : public foo {
    public:

        bar(int i=0) : foo(i) {}

        virtual int add(int i);
        virtual void setvec(std::vector<double> &v);

};
