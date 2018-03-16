#include <iostream>
#include <fstream>

#include "ItemType.h"
#include"UnsortedType.h"

using namespace std;

int main()
{
   string inFile, outFile, testRun;
   cout << "Enter name of input command file: "; cin >> inFile;

   ifstream in(inFile.c_str());

   UnsortedType mylist;
   ItemType item;
   int n;

  if(in.is_open())
  {
      cout << "Enter name of output command file: "; cin >> outFile;
      cout << "Enter name of test run: "; cin >> testRun;

      ofstream out(outFile.c_str());


    string line;
    int command=1;
    out << testRun << endl;
    while(in >> line)
    {

        if(line == "GetLength")
        {
            out << "Length is " << mylist.getLength() << endl;
            cout << endl << "GetLength command number "<< command << " completed." <<  endl;
            command++;
        }
        else if(line == "PutItem")
        {
            in >> n;
            item.Initialize(n);
            mylist.putItem(item);
            out << n << " is in list." <<  endl;


            cout << "PutItem command number " << command << " completed." << endl;
            command++;
        }
        else if(line == "PrintList")
        {
            out << "PrintList" << endl;
            mylist.PrintList(out, mylist);

            cout << "PrintList command number " << command << " completed." << endl;
            command++;
        }
        else if(line == "GetItem")
        {
            bool found = false;
            in >> n;
            ItemType it;
            it.Initialize(n);
            it.Print(out);
            item = mylist.getItem(it, found);

            if(found == true) out<< " is in list."<< endl;
            else out<< " is not in list."<< endl;

            cout << "GetItem command number " << command << " completed." << endl;
            command++;
        }
        else if(line == "IsFull")
        {
            bool full = mylist.isFull();
            if(full == true) out << "List is full." << endl;
            else out << "list is not full." << endl;

            cout << "IsFull command number " << command << " completed." << endl;
            command++;
        }
         else if(line == "DeleteItem")
        {
            in >> n;
            ItemType it;
            it.Initialize(n);
            mylist.deleteItem(it);

            it.Print(out);
            out<< " is deleted." << endl;

            cout << "DeleteItem command number " << command << " completed." << endl;
            command++;
        }
         else if(line == "MakeEmpty")
        {
            mylist.makeEmpty();
            out << "List is Empty." << endl;
            cout << "MakeEmpty command number " << command << " completed." << endl;
            command++;
        }
        else if(line == "Error")
        {
            cout << "Error command not recognized." << endl;
            command++;
        }
        else if(line == "Quit")
        {
            cout << "Command number " << command << " completed." << endl;
            cout << "Quit \nTesting Completed." << endl;
        }

    }
    }

  else cout << "Input file Not Found" << endl;

    return 0;
}
