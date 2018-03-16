#include <iostream>

using namespace std;

#include "Itemtype.h"
#include "UnsortedType.h"

int main()
{
    UnsortedType list1;
    ItemType item;
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(30);
    list1.putItem(item);
    item.Initialize(5);
    list1.putItem(item);
    item.Initialize(6);
    list1.putItem(item);
    item.Initialize(7);
    list1.putItem(item);
    item.Initialize(8);
    list1.putItem(item);
    item.Initialize(63);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(35);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);

    item.Initialize(3);
    list1.deleteItem(item);
    list1.PrintList();
    return 0;
}
