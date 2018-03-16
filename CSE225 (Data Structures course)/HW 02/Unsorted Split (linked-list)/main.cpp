#include <iostream>

#include "ItemType.h"
#include"UnsortedType.h"

using namespace std;

int main()
{
ItemType item;
    item.Initialize(3);
    UnsortedType list1;
    list1.putItem(item);
    item.Initialize(0);
    list1.putItem(item);
    item.Initialize(6);
    list1.putItem(item);
    item.Initialize(5);
    list1.putItem(item);
    item.Initialize(100);
    list1.putItem(item);
    item.Initialize(7);
    list1.putItem(item);
    item.Initialize(9);

    item.Initialize(0);

    UnsortedType list2;
    UnsortedType list3;
    list2 = list1.SplitList(list3, item);

    cout << "1st list:  ";
    list2.resetList();
    for(int i=0; i<list2.getLength();i++)
    {
        ItemType  item = list2.getNextItem();
        item.Print();
    }
    cout << "2nd list : " ;
      list3.resetList();
    for(int i=0; i<list3.getLength();i++)
    {
        ItemType  item = list3.getNextItem();
        item.Print();
    }


    return 0;
}
