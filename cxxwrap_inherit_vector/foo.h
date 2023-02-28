#pragma once
#include <vector>

class foo {
    public:

        foo(int i=0) : m_value(i) {}

        virtual int add(int i);
        virtual void setvec(std::vector<double> &v);

        int m_value;
};
