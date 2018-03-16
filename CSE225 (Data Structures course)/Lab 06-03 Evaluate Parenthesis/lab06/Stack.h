#ifndef STACKTYPE_H
#define STACKTYPE_H

#include <iostream>
#include "ItemType.h"
#include <fstream>
#include <string>

using namespace std;

#define MAX_ITEMS 5

struct NodeType
{
    ItemType info;
    NodeType* next;
};
class FullStack
{

};
class EmptyStack
{

};
class Stack
{
private:
    NodeType* topPtr;
public:
    Stack();
    ~Stack();
    bool isFull() const;
    bool isEmpty() const;
    void Push(ItemType);
    void Pop();
    ItemType Top();
};
#endif // STACKTYPE_H
