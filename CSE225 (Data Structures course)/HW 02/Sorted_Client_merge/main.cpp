#include <iostream>
#include <fstream>

#include "ItemType.h"
#include "sortedType.h"

using namespace std;
SortedType Merge(SortedType& list1,SortedType& list2)
{
    SortedType list3;
    list1.resetList();
    list2.resetList();
    for(int i=0; i<list1.getLength(); i++)
    {
        ItemType item;
        item = list1.getNextItem();
        list3.putItem(item);
    }


    for(int i=0; i<list2.getLength(); i++)
    {
        ItemType item2;
        item2 = list2.getNextItem();
        list3.putItem(item2);
    }

    return list3;
}
int main()
{
    SortedType list1,list2;
    ItemType item;
    item.Initialize(1);
    list1.putItem(item);
    item.Initialize(20);
    list1.putItem(item);
    item.Initialize(39);
    list1.putItem(item);
    item.Initialize(4);
    list1.putItem(item);
    item.Initialize(5);
    list1.putItem(item);
    item.Initialize(6);
    list1.putItem(item);
    item.Initialize(61);
    list1.putItem(item);

    item.Initialize(7);
    list2.putItem(item);
    item.Initialize(8);
    list2.putItem(item);
    item.Initialize(90);
    list2.putItem(item);
    item.Initialize(10);
    list2.putItem(item);
    item.Initialize(11);
    list2.putItem(item);
    item.Initialize(12);
    list2.putItem(item);

    SortedType list3 = Merge(list1, list2);
    list3.PrintList();
    return 0;
}
