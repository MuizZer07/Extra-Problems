
#ifndef UNSORTED_H
#define UNSORTED_H

#include "ItemType.h"
#include <iostream>
const int MAX_ITEMS =15;

class UnsortedType
{
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
public:
    UnsortedType();
    void makeEmpty();
    bool isFull()const;
    int getLength()const;
    ItemType getItem(ItemType, bool&);
    void putItem(ItemType);
    void deleteItem(ItemType);
    void resetList();
    ItemType getNextItem();
    void PrintList();
    UnsortedType Splitlist(UnsortedType&, ItemType);
};

#endif // UNSORTED_H
