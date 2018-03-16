#ifndef UNSORTED_CPP
#define UNSORTED_CPP

#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
    length = 0;
}
void UnsortedType::makeEmpty()
{
    length = 0;
}
bool UnsortedType::isFull()const
{
    return (length==MAX_ITEMS);
}
int UnsortedType::getLength()const
{
    return length;
}
ItemType UnsortedType::getItem(ItemType item, bool& found)
{
    bool moreToSearch;
    int location = 0;
    found = false;

    moreToSearch=(location < length);
    while(moreToSearch && !found)
    {
        switch(item.CompareTo(info[location]))
        {
        case LESS:
        case GREATER:
            location++;
            moreToSearch = (location<length);
            break;
        case EQUAL:
            found = true;
            item = info[location];
            break;
        }
    }
    return item;
}
void UnsortedType::putItem(ItemType item)
{
    info[length] = item;
    length++;
}
void UnsortedType::deleteItem(ItemType item)
{
    int location = 0;
    while(item.CompareTo(info[location])!=EQUAL) location++;

    info[location]=info[length-1];
    length--;
}
void UnsortedType::resetList()
{
    currentPos = -1;
}
ItemType UnsortedType::getNextItem()
{
    currentPos++;
    return info[currentPos];
}
//void UnsortedType::PrintList(ofstream& out, UnsortedType& list)
//{
//        list.resetList();
//
//        for(int i=0; i<list.getLength(); i++)
//        {
//         ItemType item = list.getNextItem();
//         item.Print(out);
//        }
//        out << endl;
//}
UnsortedType UnsortedType::Splitlist(UnsortedType& list1, ItemType item)
{
    UnsortedType list2;
    int location = 0;

    while(item.CompareTo(info[location])!= EQUAL) location++;

    for(int i=0; i<getLength();i++)
    {
        if(info[i].CompareTo(info[location])==EQUAL || info[i].CompareTo(info[location])==LESS) list2.putItem(info[i]);
        else list1.putItem(info[i]);
    }
    return list2;
}
#endif // UNSORTED_CPP
