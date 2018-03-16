#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "ItemType.h"
#include "sortedType.h"

using namespace std;
void Merge(SortedType& list,SortedType& list1,SortedType& list2)
{
    list1.resetList();
    list2.resetList();
    for(int i=0; i<list1.getLength(); i++)
    {
        ItemType item;
        item = list1.getNextItem();
        list.putItem(item);
    }


    for(int i=0; i<list2.getLength(); i++)
    {
        ItemType item2;
        item2 = list2.getNextItem();
        list.putItem(item2);
    }
}
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    string line;
    int a;
    SortedType list1, list2, list;
    if(in.is_open())
    {
        while(in >> line)
        {
            if(line == "list1")
            {
               while(line != "list2")
               {
                   in >> line;
                   if(line == "list2") break;
                   char* l;
                   l = new char[line.length()+1];
                   strcpy(l, line.c_str());
                   a = atoi(l);
                   ItemType item;
                   item.initialize(a);
                   list1.putItem(item);
               }
            }
          if(line =="list2")
          {
            while(in >> line)
               {
                   char* l;
                   l = new char[line.length()+1];
                   strcpy(l, line.c_str());
                   a = atoi(l);
                   ItemType item;
                   item.initialize(a);
                   list2.putItem(item);
               }
         }
    }
}
    else cout << "Unable to open the file." << endl;
    Merge(list, list1, list2);
    list.printList(out);
    return 0;
}
