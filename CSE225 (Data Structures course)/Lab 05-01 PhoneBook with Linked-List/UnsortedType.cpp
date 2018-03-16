#ifndef UNSORTED_CPP
#define UNSORTED_CPP

#include "UnsortedType.h"

UnsortedType::UnsortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

UnsortedType::~UnsortedType()
{
    NodeType* tempPtr;

    while( listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
}
void UnsortedType::makeEmpty()
{
    NodeType* tempPtr;

    while( listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
}
bool UnsortedType::isFull()const
{
    NodeType* location;
    try{
        location= new NodeType;
        delete location;
        return false;
    }catch(bad_alloc exception)
    {
        return true;
    }
}
int UnsortedType::getLength()const
{
    return length;
}
ItemType UnsortedType::getItem(ItemType item, bool& found)
{
    bool moreToSearch;
    NodeType* location;

    location = listData;
    found = false;
    moreToSearch=(location !=NULL);
    while(moreToSearch && !found)
    {
        switch(item.CompareTo(location->info))
        {
        case LESS:
        case GREATER:
            location = location->next;;
            moreToSearch = (location !=NULL);
            break;
        case EQUAL:
            found = true;
            item = location->info;
            break;
        }
    }
    return item;
}
void UnsortedType::putItem(ItemType item)
{
   NodeType* location;
   location = new NodeType;
   location->info = item;
   location->next = listData;

   listData = location;
   length++;
}
void UnsortedType::deleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation;

    if(item.CompareTo(listData->info) == EQUAL)
    {
       tempLocation = location;
       listData = location->next;
    }
    else
    {
        while(item.CompareTo(location->next->info))
        {
            location = location->next;
        }

        tempLocation = location->next;
        location->next = location->next->next;
    }
    delete tempLocation;
    length--;
}
void UnsortedType::resetList()
{
    currentPos = NULL;
}
ItemType UnsortedType::getNextItem()
{
    ItemType item;
    if(currentPos==NULL)
    {
        currentPos = listData;
    }
    else {
        currentPos = currentPos->next;
    }
    item = currentPos->info;
    return item;
}
void UnsortedType::PrintList(ofstream& out, UnsortedType& list)
{
    if(listData== NULL){
            out << "Phone Book is empty." << endl;
        }
     else{
        list.resetList();

        for(int i=0; i<list.getLength(); i++)
        {
         ItemType item = list.getNextItem();
         item.Print(out);
         out << endl;
        }
     }
    }

#endif // UNSORTED_CPP
