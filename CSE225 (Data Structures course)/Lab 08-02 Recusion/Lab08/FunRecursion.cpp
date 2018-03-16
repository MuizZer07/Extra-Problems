#ifndef FUNRECURSION_CPP
#define FUNRECURSION_CPP
#include <string>
#include <cstring>
#include <cstdlib>
#include "FunRecursion.h"

#include <iostream>
using namespace std;
FunRecursion::FunRecursion()
{

}
int FunRecursion::sum(int n)
{
    if(n == 1)
        return 1;
    else return (n+sum(n-1));
}
string FunRecursion::reverse(string str)
{
    if (str.length() <= 1)
    {
        return str;
    }
    else
    {
        int n = str.length() - 1;
        string new_str = str.substr(n, 1);
        str = str.substr(0, n);

        return new_str + reverse(str);

    }
}
int FunRecursion::product(int a, int b)
{
    if(b == 1)
        return a;
    else return (a + product(a, b-1));
}
bool FunRecursion::palindorme(string str)
{
    int length = str.length();

    if(length <= 1)return true;
    else if(str.at(0) == str.at(length -1))
    {
    str = str.substr(1, (length - 2));
    return palindorme(str);
    }
    else return false;
}
string FunRecursion::palindormePlus(string str, int i)
{

    if (i >= str.length())
    {
        string news = str.substr(str.length()-1, 1);
        str =  str.substr(0,str.length()-1);

        return news + palindormePlus(str,i);
    }
    else
    {
        int n = str.length() - 1;
        string new_str = str.substr(i, 1);
//        str = str.substr(i+1, n);

        return new_str + palindormePlus(str, i+1);

    }
}
int FunRecursion::digits(int n)
{
    n = n/10;
    if(n == 0)
        return 1;
    else return (1 + digits(n));
}
#endif // FUNRECURSION_CPP
