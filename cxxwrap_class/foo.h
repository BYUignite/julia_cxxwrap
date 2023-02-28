#pragma once

class foo {
    public:

        foo(int i=0) : m_value(i) {}

        int add(int i);

    private:

        int m_value;
};
