#ifndef UNSORTED_H
#define UNSORTED_H

#include "ItemType.h"
#include <iostream>

struct NodeType{
    ItemType info;
    NodeType* next;
};

class UnsortedType
{
private:
    int length;
    NodeType* listData;
    NodeType* currentPos;
public:
    UnsortedType();
    ~UnsortedType();
    void makeEmpty();
    bool isFull()const;
    int getLength()const;
    ItemType getItem(ItemType, bool&);
    void putItem(ItemType);
    void deleteItem(ItemType);
    void resetList();
    ItemType getNextItem();
    void PrintList(ofstream&, UnsortedType&);
    UnsortedType SplitList(UnsortedType&, ItemType);
};

#endif // UNSORTED_H
