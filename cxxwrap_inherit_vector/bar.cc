#include "bar.h"

int bar::add(int i) {
    return m_value + 1000*i;
}

void bar::setvec(std::vector<double> &v) {
    v[0] = 100.1;
    v[1] = 200.2;
}
