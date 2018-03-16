#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
#include <fstream>
using namespace std;

enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
private:
    int value;
public:
    ItemType();
    RelationType CompareTo(ItemType)const;
    void Print()const;
    void Initialize(int);
};
#endif // ITEMTYPE_H
