#include <iostream>
#include <fstream>

#include "ItemType.h"
#include "sortedType.h"

using namespace std;
SortedType Split(SortedType& list1,SortedType& list2, ItemType item)
{
//    int location = 0;
//    list1.resetList();
//     while(item.CompareTo(list1.getNextItem()) != EQUAL)
//     {
//         location++;
//     }

//    int midPoint, first = 0, last = list1.getLength()-1;
//
//    bool moreTosearch = (first <= last);
//    bool found = false;
//
//    while(moreTosearch && !found)
//    {
//        list1.resetList();
//        midPoint = (first+last)/2;
//        switch (item.CompareTo(list1.getNextItem()))
//        {
//        case LESS:
//            last =  midPoint-1;
//            moreTosearch = (first<=last);
//            break;
//        case GREATER:
//            first = midPoint+1;
//            moreTosearch= (first<=last);
//            break;
//        case EQUAL:
//            found = true;
//            break;
//        }
//    }
//    cout<< midPoint << endl;
    SortedType list3;
    list1.resetList();
    for(int i = 0; i<list1.getLength(); i++)
    {
         ItemType item2 = list1.getNextItem();
        if(item.CompareTo(item2)==EQUAL||item.CompareTo(item2)==LESS)
              list2.putItem(item2);

        else list3.putItem(item2);
    }
    return list3;
}
int main()
{
    SortedType list1;
    ItemType item;
    item.Initialize(1);
    list1.putItem(item);
    item.Initialize(2);
    list1.putItem(item);
    item.Initialize(3);
    list1.putItem(item);
    item.Initialize(4);
    list1.putItem(item);
    item.Initialize(5);
    list1.putItem(item);
    item.Initialize(6);
    list1.putItem(item);


    ItemType item2;
    item2.Initialize(1);

    SortedType list2;
    SortedType list3;
    list3 = Split(list1, list2, item2);

    cout << "1st list:  ";
    list2.PrintList();

    cout << "2nd list : " ;
    list3.PrintList();

    return 0;
}
