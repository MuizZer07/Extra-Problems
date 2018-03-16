#include <iostream>
#include <fstream>

#include "ItemType.h"
#include"UnsortedType.h"
#include "ListType.h"
using namespace std;


int main()
{
    ItemType item;
    item.Initialize(3);
    ListType list1;
    list1.putItem(item);
    item.Initialize(07);
    list1.putItem(item);
    item.Initialize(66);
    list1.putItem(item);
    item.Initialize(55);
    list1.putItem(item);
    item.Initialize(1);
    list1.putItem(item);
    item.Initialize(76);
    list1.putItem(item);
    item.Initialize(9);

    item.Initialize(9);

    ListType list2;
    ListType list3;
    list2 = list1.Splitlist(list3, item);



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
