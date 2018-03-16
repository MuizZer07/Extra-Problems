#include <iostream>
#include <fstream>
#include "Stack.h"

using namespace std;

bool ParentMatch(char X[],int n){
    Stack S;
    bool match;
    for(int i=0; i<=n-1; i++)
    {
       if(X[i] == '(' || X[i] == '{' || X[i] == '[') S.Push(X[i]);

       else if(X[i] == ')' || X[i] == '}' || X[i] == ']')
       {
           if (!S.isEmpty()) {
             if(S.Top()=='('|| X[i] == ')') S.Pop();

            else if(S.Top()=='{'|| X[i] == '}') S.Pop();

            else if(S.Top()=='['|| X[i] == ']') S.Pop();

           }
       }
    }
       if(S.isEmpty()) return true;
       else return false;
}
int main()
{
    string infile;

    cout << "Enter name of input file: "; cin >> infile;

    ifstream in(infile.c_str());

    char line;
    int i=10000;
    char X[i];
    int n=0;
    if(in.is_open()){
        while(in >> line){
           X[n] =  line;
            n++;
        }

    bool match = ParentMatch(X,n);
    if (match == true)
        cout << "The grouping symbols match" << endl;
    else
        cout << "The grouping symbols do not match" << endl;

    }
    else cout << "Unable to open the file." << endl;
    return 0;
}
