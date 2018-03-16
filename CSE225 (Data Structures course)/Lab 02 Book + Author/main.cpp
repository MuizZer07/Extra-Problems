#include <iostream>

#include "Book.h"
#include "Author.h"
using namespace std;

int main()
{
    Author a("Muiz Ahmed Khan", "muizXzer07@gmail.com",'m');
    Book b("Mug N Moo",a,19.99,88);
    b.print();
    return 0;
}
