#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "SortedType.h"
#include "ItemType.h"
#include <fstream>
#include <iostream>
using namespace std;

class PhoneBook{

private:
   SortedType contactList;
   ifstream &inputfile;
   ofstream &outputfile;
public:
    PhoneBook(ifstream &inputfile, ofstream &outputfile);
    void AddContact();
    void DeleteContact();
    bool SearchContact();
    void PrintContactList();
    void GetTotalContacts();
    void GetStatus();
    void EmptyList();
};
#endif // PHONEBOOK_H

