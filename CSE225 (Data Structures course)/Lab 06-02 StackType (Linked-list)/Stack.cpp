#ifndef STACKTYPE_CPP
#define STACKTYPE_CPP

#include "Stack.h"

Stack::Stack()
{
    topPtr = NULL;
}
Stack::~Stack()
{
    NodeType* temp;

    while (  topPtr != NULL)
    {
        temp = topPtr;
        topPtr = topPtr->next;
        delete temp;
    }
}
bool Stack::isEmpty() const
{
    return (topPtr == NULL);
}
bool Stack::isFull() const
{
    NodeType* temp;
    try{
        temp = new NodeType;
        delete temp;
        return false;
    }catch(bad_alloc e){
        return true;
    }
}
void Stack::Push(ItemType newItem)
{
    if(isFull())
        throw FullStack();


    else{
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next=topPtr;
        topPtr = location;
    }
}
void Stack::Pop()
{
    if(isEmpty())
        throw EmptyStack();

    else{
        NodeType* temp;
        temp = new NodeType;
        temp = topPtr;
        topPtr = topPtr->next;
        delete temp;
    }

}
ItemType Stack::Top()
{
    if(isEmpty())
        throw EmptyStack();

    else{
        return topPtr->info;
    }
}
#endif // STACKTYPE_CPP
