#ifndef CHARSTACK_CPP
#define CHARSTACK_CPP

#include "CharStack.h"

CharStack::CharStack()
{
    top = -1;
}
bool CharStack::isEmpty() const
{
    return (top == -1);
}
bool CharStack::isFull() const
{
    return (top == MAX_ITEMS-1);
}
void CharStack::Push(ItemType newItem)
{
    if(isFull())
        throw FullStack();

    top++;
    items[top] = newItem;
}
void CharStack::Pop()
{
    if(isEmpty())
        throw EmptyStack();

    top--;
}
ItemType CharStack::Top()
{
    if(isEmpty())
        throw EmptyStack();

    return items[top];
}
#endif // CHARSTACK_CPP

