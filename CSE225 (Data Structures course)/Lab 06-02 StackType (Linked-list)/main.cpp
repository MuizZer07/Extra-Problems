#include <iostream>
#include <fstream>
#include "Stack.h"

using namespace std;

int main()
{
    string infilename, outfilename, testrun;

    cout << "Enter name of input command file: "; cin >> infilename;
    cout << "Enter name of output command file: "; cin >> outfilename;
    cout << "Enter name of test run: "; cin >> testrun;

    ifstream in(infilename.c_str());
    ofstream out(outfilename.c_str());

    string line;
    int command = 1;
    Stack s;

    if(in.is_open()){
            out << testrun << endl;
            while(in >> line)
            {
                if(line == "IsEmpty")
                {
                    bool next = s.isEmpty();
                    if(next == true) out << "Stack is empty." <<endl;
                    else out << "Stack is not empty." << endl;
                    cout << " Command number " << command << "completed." << endl;
                    command++;
                }
                else if(line == "IsFull")
                {
                    bool next = s.isFull();
                    if(next == true) out << "Stack is full." <<endl;
                    else out << "Stack is not full." << endl;
                    cout << " Command number " << command << "completed." << endl;
                    command++;
                }
                else if(line == "Push")
                {
                    ItemType next;
                    in >> next;
                    try{
                        s.Push(next);
                    }catch(FullStack e)
                    {
                        out << "FullStack Exception thrown." << endl;
                    }
                    cout << " Command number " << command << "completed." << endl;
                    command++;
                }
                else if(line == "Pop")
                {
                    try{
                        s.Pop();
                    }catch(EmptyStack e)
                    {
                        out << "EmptyStack Exception thrown." << endl;
                    }
                    cout << " Command number " << command << "completed." << endl;
                    command++;
                }
                else if(line == "Top")
                {
                    try{
                        s.Top();
                        out << "Top element is " << s.Top() << endl;
                    }catch(EmptyStack e)
                    {
                        out << "EmptyStack Exception thrown." << endl;
                    }
                    cout << " Command number " << command << "completed." << endl;
                    command++;
                }
                else if(line == "Error")
                {
                    out << "Error not found." <<endl;
                    cout << " Command number " << command << "completed." << endl;
                    command++;
                }
                else if(line == "Quit")
                {
                    cout << "Testing completed." << endl;
                    command++;
                }
            }

    }
    else cout << "Unable to open the file." << endl;
}
