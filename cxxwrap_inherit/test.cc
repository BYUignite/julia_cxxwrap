#include <iostream>
#include "foo.h"
#include "bar.h"

using namespace std;

int main() {

    foo *f;
    f = new bar(5);
    cout << endl << f->add(5) << endl;

    return 0;
}

