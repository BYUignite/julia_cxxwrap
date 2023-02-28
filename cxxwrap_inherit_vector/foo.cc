#include "foo.h"

int foo::add(int i) {
    return m_value + i;
}

void foo::setvec(std::vector<double> &v) {
    v[0] = 1.1;
    v[1] = 2.2;
}
