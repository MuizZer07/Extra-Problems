#ifndef STACKTYPE_H
#define STACKTYPE_H

#include <iostream>
#include "ItemType.h"
#include <fstream>
#include <string>

using namespace std;

#define MAX_ITEMS 5

class FullStack
{

};
class EmptyStack
{

};
class Stack
{
private:
    int top;
    ItemType items[MAX_ITEMS];
public:
    Stack();
    bool isFull() const;
    bool isEmpty() const;
    void Push(ItemType);
    void Pop();
    ItemType Top();
};
#endif // STACKTYPE_H
