#ifndef CHARSTACK_H
#define CHARSTACK_H

#include <iostream>
#include "Header.h"

typedef char ItemType;

class CharStack
{

private:
    int top;
    ItemType items[MAX_ITEMS];
public:
    CharStack();
    bool isFull() const;
    bool isEmpty() const;
    void Push(ItemType);
    void Pop();
    ItemType Top();
};
#endif // CHARSTACK_H


