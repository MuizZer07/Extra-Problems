#ifndef BOOK_H
#define BOOK_H

#include "Author.h"
#include <string>
#include <iostream>
using namespace std;

class Book
{
private:
    string name;
    Author author;
    double price;
    int qty;
public:
    Book(string, Author, double, int);
    string getName();
    Author getAuthor();
    double getPrice();
    int getQTY();
    void setPrice(double);
    void setQTY(int);
    void print();
    string getAuthorName();
};
#endif // BOOK_H
