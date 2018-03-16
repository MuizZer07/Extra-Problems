#include <iostream>
#include <fstream>

#include "ItemType.h"
#include "UnsortedType.h"
#include "PhoneBook.h"

using namespace std;

int main()
{
    string inFile, outFile, testRun;

    cout << "Enter name of input command file: "; cin >> inFile;
    cout << "Enter name of output command file: "; cin >> outFile;
    cout << "Enter name of test run: "; cin >> testRun;

    ofstream out(outFile.c_str());
    ifstream in(inFile.c_str());

    PhoneBook phnbook(in, out);
    string line;
    int command=1;
    out << testRun << endl;

    while(in >> line)
    {
        if(line == "GetStatus")
        {
            phnbook.GetStatus();
            cout << line << " command number " << command << " completed." << endl;
            command++;
        }
        if(line == "AddContact")
        {
            phnbook.AddContact();
            cout << line << " command number " << command << " completed." << endl;
            command++;
        }
        if(line == "PrintList")
        {
            phnbook.PrintContactList();
            cout << line << " command number " << command << " completed." << endl;
            command++;
        }
        if(line == "SearchContact")
        {
            phnbook.SearchContact();
            cout << line << " command number " << command << " completed." << endl;
            command++;
        }
        if(line == "DeleteContact")
        {
            phnbook.DeleteContact();
            cout << line << " command number " << command << " completed." << endl;
            command++;
        }
        if(line == "FindContact")
        {
            cout << line << " command  not recognized. Command number " << command << " completed." << endl;
            command++;
        }
        if(line == "MakeEmpty")
        {
            phnbook.EmptyList();
            cout << line << " command number " << command << " completed." << endl;
            command++;
        }
        if(line == "Quit")
        {
            cout << "Testing completed.";
        }
    }

    return 0;
}
