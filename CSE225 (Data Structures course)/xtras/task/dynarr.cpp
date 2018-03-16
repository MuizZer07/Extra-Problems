#ifndef DYNARR_CPP
#define DYNARR_CPP

#include "dynarr.h"
#include <iostream>
using namespace std;

dynarr::dynarr()
{
    data = NULL;
    size = 0;
}
dynarr::dynarr(int s)
{
    data = new int[5];
    size = s;
}
dynarr::~dynarr()
{
    delete []data;
}
void dynarr::set(int index, int value)
{
    data[index] = value;
}
int dynarr::get(int index)
{
    return data[index];
}
#endif // DYNARR_CPP
