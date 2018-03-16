#ifndef SORTEDTYPE_CPP
#define SORTEDTYPE_CPP

#include "SortedType.h"

SortedType::SortedType()
{
    length = 0;
}
int SortedType::getLength()const
{
   return length;
}
void SortedType::makeEmpty()
{
    length = 0;
}
bool SortedType::isFull()const
{
    return (length == MAX_ITEMS);
}
ItemType SortedType::getItem(ItemType item, bool& found)
{
    int midPoint, first = 0, last = length-1;

    bool moreTosearch = (first <= last);
    found = false;

    while(moreTosearch && !found)
    {
        midPoint = (first+last)/2;
        switch (item.CompareTo(info[midPoint]))
        {
        case LESS:
            last =  midPoint-1;
            moreTosearch = (first<=last);
            break;
        case GREATER:
            first = midPoint+1;
            moreTosearch= (first<=last);
            break;
        case EQUAL:
            found = true;
            item = info[midPoint];
            break;
        }
    }
    return item;
}
void SortedType::deleteItem(ItemType item)
{
    int location = 0;
     while(item.CompareTo(info[location]) != EQUAL)
     {
         location++;
     }
     for(int i=location + 1; i < length; i++)
     {
         info[i-1]=info[i];
     }
     length--;
}
void SortedType::putItem(ItemType item)
{
    bool moretosearch;
    int location = 0;

    moretosearch = (location < length);
    while(moretosearch)
    {
        switch(item.CompareTo(info[location]))
        {
        case LESS:
            moretosearch = false;
            break;
        case GREATER:
            location++;
            moretosearch = (location < length);
            break;
        }
    }
    for(int i=length; i > location; i--)
    {
        info[i]=info[i-1];
    }
    info[location]=item;
    length++;
}

void SortedType::resetList()
{
    currentPos = -1;
}
ItemType SortedType::getNextItem()
{
    currentPos++;
    return info[currentPos];
}
void SortedType::PrintList()
{
        resetList();

        for(int i=0; i<getLength(); i++)
        {
         ItemType item = getNextItem();
         item.Print();
        }
}
SortedType SortedType::Split(SortedType& list1, ItemType item)
{
    int midPoint, first = 0, last = length-1;

    bool moreTosearch = (first <= last);
    bool found = false;

    while(moreTosearch && !found)
    {
        midPoint = (first+last)/2;
        switch (item.CompareTo(info[midPoint]))
        {
        case LESS:
            last =  midPoint-1;
            moreTosearch = (first<=last);
            break;
        case GREATER:
            first = midPoint+1;
            moreTosearch= (first<=last);
            break;
        case EQUAL:
            found = true;
           // item = info[midPoint];
            break;
        }
    }
    SortedType list2;
    for(int i = 0; i<this->getLength(); i++)
    {
        if(i <= midPoint) list1.putItem(info[i]);
        else list2.putItem(info[i]);
    }
    return list2;
}
#endif // SORTEDTYPE_CPP
