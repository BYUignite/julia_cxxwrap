#pragma once

class foo {
    public:

        foo(int i=0) : m_value(i) {}

        virtual int add(int i);

        int m_value;
};
