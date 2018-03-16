#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
#include <fstream>
using namespace std;

enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
private:
    string name, number, address, email;
public:
    ItemType();
    RelationType CompareTo(ItemType)const;
    void Print(ostream&)const;
    void Initialize(string, string, string, string);
};
#endif // ITEMTYPE_H

