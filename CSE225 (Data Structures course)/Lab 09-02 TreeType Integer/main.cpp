#include <iostream>
#include "TreeType.h"
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;
    TreeType<int> t;


    if(in.is_open())
    {
        while(in >> n)
        {
            t.putItem(n);
        }
    t.print(out);
    out << endl;
    t.Preprint(out);
    out << endl;
    t.Postprint(out);out << endl;
    out << "Max is: " << t.FindMax() << endl;
    if(t.isBalanced()) out << "The is Nice" << endl;
    else out << "The is not Nice" << endl;
    }
    else cout << "Unable to open the file." << endl;

    return 0;
}
