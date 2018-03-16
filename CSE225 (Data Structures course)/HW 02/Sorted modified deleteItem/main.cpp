#include <iostream>
#include <fstream>

#include "ItemType.h"
#include "sortedType.h"

using namespace std;

int main()
{
    SortedType list1;
    ItemType item;
    item.Initialize(1);
    list1.putItem(item);
    item.Initialize(2);
    list1.putItem(item);
    item.Initialize(6);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(20);
    list1.putItem(item);


    ItemType item2;
    item2.Initialize(3);

    list1.deleteItem(item2);
    list1.PrintList();


    return 0;
}
