#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynarr d(2);
    d.allocate(3);

    d.set(0,2);
    d.set(1,2);
    d.set(2,2);
    return 0;
}
