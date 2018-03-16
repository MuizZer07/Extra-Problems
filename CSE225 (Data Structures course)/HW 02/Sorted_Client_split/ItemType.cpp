#ifndef ITEMTYPE_CPP
#define ITEMTYPE_CPP

#include "ItemType.h"

ItemType::ItemType()
{
    value = 0;
}
RelationType ItemType::CompareTo(ItemType item)const
{
    if(value< item.value) return LESS;
    else if (value > item.value) return GREATER;
    else return EQUAL;
}
void ItemType::Print()const
{
    cout << value << " ";
}
void ItemType::Initialize(int number)
{
    value = number;
}
#endif // ITEMTYPE_CPP

