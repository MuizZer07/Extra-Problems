#ifndef INTSTACK_H
#define INTSTACK_H


#include <iostream>
#include "Header.h"

typedef int Item;

class IntStack
{
private:
    int top;
    Item items[MAX_ITEMS];
public:
    IntStack();
    bool isFull() const;
    bool isEmpty() const;
    void Push(Item);
    void Pop();
    Item Top();
    int getSize();
};
#endif // INTSTACK_H



