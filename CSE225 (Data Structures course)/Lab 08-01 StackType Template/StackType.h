#ifndef STACKTYPE_H
#define STACKTYPE_H

#include <iostream>
using namespace std;

class FullStack{};
class EmptyStack{};

//const int MAX_ITEMS;

template <class ItemType>
class StackType
{
private:
    int top;
    ItemType* info;
    int MAX_ITEMS;
public:
    StackType(int);
    void makeEmpty();
    bool isFull()const;
    bool isEmpty()const;
    void push(ItemType);
    void pop();
    ItemType Top();
};
#endif // STACKTYPE_H
#include "StackType.cpp"
