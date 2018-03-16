#ifndef STACKTYPE_CPP
#define STACKTYPE_CPP

#include "StackType.h"

template <class ItemType>
StackType<ItemType>::StackType(int size)
{
    top = -1;
    info = new ItemType[size];
    MAX_ITEMS = size;
}
template <class ItemType>
void StackType<ItemType>::makeEmpty()
{
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::isEmpty()const
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::isFull()const
{
    return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::push(ItemType item)
{
    if(isFull()) throw FullStack();
    else{
        top++;
        info[top] = item;
    }
}
template <class ItemType>
void StackType<ItemType>::pop()
{
    if(isEmpty()) throw EmptyStack();
    else top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if(isEmpty()) throw EmptyStack();
    else return info[top];
}
#endif // STACKTYPE_CPP

