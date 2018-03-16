#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

#include <iostream>
#include "ItemType.h"
using namespace std;


class SortedType
{
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
public:
    SortedType();
    void makeEmpty();
    bool isFull()const;
    int getLength()const;
    ItemType getItem(ItemType, bool&);
    void putItem(ItemType);
    void deleteItem(ItemType);
    void resetList();
    ItemType getNextItem();
    SortedType Split(SortedType&, ItemType);
    void PrintList();
};
#endif // SORTEDTYPE_H

