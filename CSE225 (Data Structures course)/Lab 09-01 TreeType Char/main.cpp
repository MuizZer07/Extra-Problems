#include <iostream>
#include "TreeType.h"
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    char n;
    TreeType<char> t;

    if(t.isEmpty()) out << "The tree is empty." << endl;
    else out << "The tree is not empty." << endl;

    if(in.is_open())
    {
        while(in >> n)
        {
            t.putItem(n);
        }

    if(t.isEmpty()) out << "The tree is empty." << endl;
    else out << "The tree is not empty." << endl;
    t.print(out); out << endl;

    bool found;
    t.getItem('x',found);
    if(found == true) out<< "x is in the tree." << endl;
    else out<< "x is not in the tree." << endl;

    t.getItem('p',found);
    if(found == true) out<< "p is in the tree." << endl;
    else out<< "p is not in the tree." << endl;

    t.getItem('a',found);
    if(found == true) out<< "a is in the tree." << endl;
    else out<< "a is not in the tree." << endl;
    t.deleteItem('h');
    t.deleteItem('p');
    t.print(out);
    }
    else cout << "Unable to open the file." << endl;

    return 0;
}
