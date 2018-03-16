#ifndef STACKTYPE_CPP
#define STACKTYPE_CPP

#include "Stack.h"

Stack::Stack()
{
    top = -1;
}
bool Stack::isEmpty() const
{
    return (top == -1);
}
bool Stack::isFull() const
{
    return (top == MAX_ITEMS-1);
}
void Stack::Push(ItemType newItem)
{
    if(isFull())
        throw FullStack();

    top++;
    items[top] = newItem;
}
void Stack::Pop()
{
    if(isEmpty())
        throw EmptyStack();

    top--;
}
ItemType Stack::Top()
{
    if(isEmpty())
        throw EmptyStack();

    return items[top];
}
#endif // STACKTYPE_CPP
