#ifndef BOOK_CPP
#define BOOK_CPP

#include "Book.h"

Book::Book(string namee, Author a, double pricee, int qtyy):author(a)
{
    name = namee;
    price =  pricee;
    qty = qtyy;
}
string Book::getName()
{
    return name;
}
Author Book::getAuthor()
{
    return author;
}
double Book::getPrice()
{
    return price;
}
int Book::getQTY()
{
    return qty;
}
void Book::setPrice(double p)
{
    price = p;
}
void Book::setQTY(int q)
{
    qty = q;
}
void Book::print()
{
    author.print();
    cout << "Book Information: " << endl << "'" << name << "' by ";
    author.print();
    cout << "Quantity in stock: " << qty << endl << "Price: " << price << endl << "Author Name: " << author.getName() << endl << "Author Email: " << author.getEmail()<< endl;
}
string Book::getAuthorName()
{
    return author.getName();
}
#endif // BOOK_CPP
