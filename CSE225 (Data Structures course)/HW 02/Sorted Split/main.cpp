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
    item.Initialize(30);
    list1.putItem(item);
    item.Initialize(40);
    list1.putItem(item);
    item.Initialize(5);
    list1.putItem(item);
    item.Initialize(6);
    list1.putItem(item);


    ItemType item2;
    item2.Initialize(30);

    SortedType list2;
    SortedType list3;
    list3 = list1.Split(list2, item2);

    cout << "1st list:  ";
    list2.PrintList();
//    list2.resetList();
//    for(int i=0; i<list2.getLength();i++)
//    {
//        ItemType  item = list2.getNextItem();
//        item.Print();
//    }
    cout << "2nd list : " ;
    list3.PrintList();
//      list3.resetList();
//    for(int i=0; i<list3.getLength();i++)
//    {
//        ItemType  item = list3.getNextItem();
//        item.Print();
//    }
    return 0;
}
