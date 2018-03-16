#include <iostream>
#include "StackType.h"
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    StackType<int> s(5);
    int number;
    if(in.is_open())
    {
        while(in >> number)
        {
            s.push(number);
        }
        s.pop();
        cout << s.Top() << endl;
    }
    else cout << "Unable to open the file." << endl;
    return 0;
}
