#include <iostream>
#include <vector>
#include "foo.h"
#include "bar.h"

using namespace std;

int main() {

    foo *f;
    f = new bar(5);
    cout << endl << f->add(5) << endl;

    vector<double> v(2, 0.0);

    f->setvec(v);
    cout << endl << v[0] << " " << v[1] << endl;

    return 0;
}

