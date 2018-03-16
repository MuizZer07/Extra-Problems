#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include "CharStack.h"
#include "IntStack.h"
#include <fstream>
#include <cmath>

using namespace std;

CharStack opSTK;
IntStack valSTK;

void doOP();
void repeatOP(char);
int EvalExp(string);
int Precedence(char);
int Calculate(int, int, char);
int main()
{

    ifstream in ("input.txt");
    string expr;
    if(in.is_open()){
        getline(in, expr);
        cout << EvalExp(expr)<< endl;
    }
    else cout << "Unable to open the file." << endl;
    return 0;
}
int EvalExp(string expr)
{
    int value;
    char* token;
    char* inputstream = new char[expr.length()+1];
    strcpy(inputstream, expr.c_str());
    token = strtok(inputstream, " ");



    while(token != NULL)
    {
        if(token[0] >= '0' && token[0] <= '9') valSTK.Push(atoi(token));
        else if(token[0] == '(' || token[0] == '{' || token[0] == '[') opSTK.Push(atoi(token));

        else if(token[0] == ')' || token[0] == '}' || token[0] == ']') doOP();

        else
        {
             repeatOP(token[0]);
             opSTK.Push((token[0]));
        }
        token = strtok(NULL, " ");
    }
    repeatOP('$');
    return valSTK.Top();
}
void repeatOP(char c)
{
    while(valSTK.getSize()>1 && Precedence(c)<= Precedence(opSTK.Top()))
        doOP();
}
void doOP()
{
    int x = valSTK.Top();
    valSTK.Pop();
    int y = valSTK.Top();
    valSTK.Pop();
    char op = opSTK.Top();
    opSTK.Pop();

    valSTK.Push(Calculate(y,x,op));
}
int Precedence(char c)
{
    switch(c)
    {
    case '+':
    case '-':
        return 5;
    case '*':
    case '/':
        return 10;
    case '%':
        return 12;
    case '^':
        return 15;
    case '$':
        return 0;
    }
}
int Calculate(int x, int y, char c)
{
    switch(c)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x%y;
    case '^':
        return pow(x,y);
    }
}
