#include <iostream>
#include "FunRecursion.h"

using namespace std;

int main()
{
    FunRecursion f;

//    cout << f.sum(6) << endl;
//    cout << f.digits(2288888332) << endl;
//    cout << f.product(9,10) << endl;
    string r = f.reverse("cse 225 lab");
//    cout << r << endl;
    string s = "wow";
//    cout << f.palindorme(s)<< endl;
    string q = f.palindormePlus("cse 225 lab",0);
    cout << q << endl;
    return 0;
}
