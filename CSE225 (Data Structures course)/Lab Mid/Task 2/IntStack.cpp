#ifndef INTSTACK_CPP
#define INTSTACK_CPP

#include "IntStack.h"

IntStack::IntStack()
{
    top = -1;
}
bool IntStack::isEmpty() const
{
    return (top == -1);
}
bool IntStack::isFull() const
{
    return (top == MAX_ITEMS-1);
}
void IntStack::Push(Item newItem)
{
    if(isFull())
        throw FullStack();

    top++;
    items[top] = newItem;
}
void IntStack::Pop()
{
    if(isEmpty())
        throw EmptyStack();

    top--;
}
Item IntStack::Top()
{
    if(isEmpty())
        throw EmptyStack();

    return items[top];
}
int IntStack::getSize()
{
    return top+1;
}
#endif // INTSTACK_CPP


