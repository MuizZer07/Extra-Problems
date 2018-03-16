#include <iostream>
#include "UnsortedType.h"

using namespace std;

UnsortedType Split(UnsortedType& list1, UnsortedType& list2, ItemType item)
{
    UnsortedType list3;

    list1.resetList();
    for(int i=0; i<list1.getLength();i++)
    {
        ItemType item2 = list1.getNextItem();
        if(item.CompareTo(item2)==EQUAL  )
              list2.putItem(item2);
        else if(item.CompareTo(item2)==LESS)list2.putItem(item2);

        else list3.putItem(item2);
    }


    return list3;
}


int main()
{
    UnsortedType list1;
    ItemType item;
    item.Initialize(1);
    list1.putItem(item);
    item.Initialize(2);
    list1.putItem(item);
    item.Initialize(39);
    list1.putItem(item);
    item.Initialize(4);
    list1.putItem(item);
    item.Initialize(5);
    list1.putItem(item);
    item.Initialize(-6);
    list1.putItem(item);


    ItemType item2;
    item2.Initialize(2);

    UnsortedType list2;
    UnsortedType list3;
    list3 = Split(list1, list2, item2);

    cout << "1st list:  ";
    list2.PrintList();

    cout << "2nd list : " ;
    list3.PrintList();
    return 0;
}
