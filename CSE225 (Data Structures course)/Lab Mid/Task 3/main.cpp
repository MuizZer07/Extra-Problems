#include <iostream>
#include "ItemType.h"
#include "QueueType.h"
#include <fstream>

using namespace std;

int main()
{
    ItemType item;
    QueueType que;
    ifstream in("input.txt");
    ofstream out("output.txt");
    int number;
    if(in.is_open())
    {
        while(in >> number)
        {
            item.initialize(number);
            que.EnQueue(item);
        }
    }
    else cout << "Unable to open the file. " << endl;
    item = que.maxItem();
    item.print(out);
    return 0;
}
