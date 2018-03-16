#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynarr d1;
    dynarr d2(5);

    int number;

    cout << "set 5 inputs for the second object" <<endl;
    for(int i=0; i<5; i++)
    {
        cout << "input " << i+1 << " :" << endl;
        cin >> number;
        d2.set(i, number);
    }
    cout << "inputs are: " <<endl;
    for(int i=0; i<5; i++)
    {
        cout << d2.get(i) << endl;
    }
    return 0;
}
