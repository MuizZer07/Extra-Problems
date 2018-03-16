#ifndef ITEMTYPE_CPP
#define ITEMTYPE_CPP

#include "ItemType.h"

ItemType::ItemType()
{
    this->name= "";
    this->number= "";
    this->address="";
    this->email="";
}
RelationType ItemType::CompareTo(ItemType item)const
{
    if(this->name < item.name) return LESS;
    else if (this->name > item.name) return GREATER;
    else return EQUAL;
}
void ItemType::Print(ostream& out)const
{
    out << "Name: " << this->name;
    out << " Number: " << this->number;
    out << " Address: " << this->address;
    out << " Email: " << this->email;
}
void ItemType::Initialize(string name, string number, string address, string email)
{
    this->name= name;
    this->number= number;
    this->address=address;
    this->email=email;
}
#endif // ITEMTYPE_CPP
