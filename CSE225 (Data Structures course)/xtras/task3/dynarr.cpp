#ifndef DYNARR_CPP
#define DYNARR_CPP

#include "dynarr.h"
#include <iostream>
using namespace std;

dynarr::dynarr()
{
    data = NULL;
    this->row = 0;
    this->col = 0;
}
dynarr::dynarr(int r, int c)
{
    this->row = r;
    this->col = c;
    data = new int*[r];

    for(int i = 0; i < r; i++)
    data[i] = new int[c];
}
dynarr::~dynarr()
{
    for (int i = 0; i < row; i++)
            delete [] data[i];

    delete [] data;
}
void dynarr::set(int row, int col, int value)
{
    data[row][col] = value;
}
int dynarr::get(int row, int col)
{
    return data[row][col];
}
void dynarr::allocate(int row, int col)
{
    this->row = row;
    this->col = col;
    data = new int*[row];

    for(int i = 0; i < row; ++i)
    data[i] = new int[col];
}
#endif // DYNARR_CPP
