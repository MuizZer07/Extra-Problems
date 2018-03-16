#ifndef QUEUETYPE_CPP
#define QUEUETYPE_CPP

#include "QueueType.h"

QueueType::QueueType()
{
    maxQue = 500;
    rear = maxQue - 1;
    front = maxQue - 1;
    items = new ItemType[maxQue];
    length = 0;
}
QueueType::~QueueType()
{
    delete [] items;
}
void QueueType::makeEmpty()
{
    rear = maxQue - 1;
    front = maxQue - 1;
}
bool QueueType::isEmpty()const
{
    return (front == rear);
}
bool QueueType::isFull()const
{
    return ((rear+1)%maxQue==front);
}
void QueueType::EnQueue(ItemType item)
{
    if(isFull()) throw FullQueue();
    else{
        rear = (rear+1)%maxQue;
        items[rear] = item;
        length++;
    }
 }
void QueueType::Dequeue(ItemType item)
{
    if(isEmpty()) throw EmptyQueue();
    else{
        front = (front+1)%maxQue;
        item= items[front];
        length--;
    }
}
ItemType QueueType::maxItem()
{
    ItemType it;
    if(isEmpty()) throw EmptyQueue();
    else
    {
        for(int i = 0; i<length; i++)
        {
            if(items[i].CompareTo(items[i+1])== GREATER)
                if(items[i].CompareTo(it)== GREATER) it = items[i];

        }
        return it;
    }
}
#endif // QUEUETYPE_CPP
