#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "PhoneBook.h"

PhoneBook::PhoneBook(ifstream &in, ofstream &out): inputfile(in), outputfile(out)
{

}
void PhoneBook::AddContact()
{
        string name, number, address, email;
        inputfile >> name >> number >> address >> email;
        ItemType item;
        item.Initialize(name, number, address, email);
        contactList.putItem(item);
        item.Print(outputfile);
        outputfile << " is in Phone Book." << endl;
}
void PhoneBook::DeleteContact()
{
        string name, number="", address="", email="";
        inputfile >> name;
        ItemType item;
        item.Initialize(name, number, address, email);
        contactList.deleteItem(item);
        outputfile << name << "is deleted form Phone Book." << endl;
}
bool PhoneBook::SearchContact()
{
        string name, number="", address="", email="";
        inputfile >> name;;
        ItemType item;
        item.Initialize(name, number, address, email);
        bool found;
        ItemType item1 = contactList.getItem(item, found);
        if(found == true)
        {
            item1.Print(outputfile);
            outputfile << " found in Phone Book." << endl;
        }
        else {
            item1.Print(outputfile);
            outputfile << " not found in Phone Book." << endl;
        }
        return found;

}
void PhoneBook::PrintContactList()
{
        outputfile << "Print Contact List." << endl;

        contactList.PrintList(outputfile, contactList);

}
void PhoneBook::GetTotalContacts()
{

}
void PhoneBook::GetStatus()
{
    bool found = contactList.isFull();
    if(found == true)
    {
        outputfile << "Phone Book is full."<< endl;
    }
    else outputfile << "Phone Book is not full."<< endl;
}
void PhoneBook::EmptyList()
{
    contactList.makeEmpty();
    outputfile << "Phone Book is empty." << endl;
}
#endif // PHONEBOOK_CPP
