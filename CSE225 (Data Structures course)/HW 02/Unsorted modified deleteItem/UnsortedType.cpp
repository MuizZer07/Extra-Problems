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
   bool moreToSearch;
   int location = 0, dec = 0;
   bool found = false;
   bool b;
   moreToSearch=(location < length);
    while(moreToSearch)
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
            for(int i=location; i<length-1; i++)
            {
                //b = (info[location].CompareTo(info[location+1])==EQUAL);
                info[i]=info[i+1];
            }
            length--;
            if(info[location].CompareTo(item)!=EQUAL){
                    location++;
            }
            moreToSearch = (location<length);
            break;
        }
    }
   if(found == false){
    cout << "No match." << endl;
   }

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
void UnsortedType::PrintList()
{
        resetList();

        for(int i=0; i<getLength(); i++)
        {
         ItemType item = getNextItem();
         item.Print();
        }
}
UnsortedType UnsortedType::Splitlist(UnsortedType& list2, ItemType item)
{
    UnsortedType list1;
    bool moreToSearch;
    int location = 0;
    bool found = false;

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
   // cout << "length: " << info[getLength()] << endl;
    for(int i=0; i<getLength();i++)
    {
        if(i<= location) list1.putItem(info[i]);
        else list2.putItem(info[i]);
    }

    return list1;
}
#endif // UNSORTED_CPP

