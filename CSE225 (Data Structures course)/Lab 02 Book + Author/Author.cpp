#ifndef AUTHOR_CPP
#define AUTHOR_CPP

#include "Author.h"

Author::Author(string namee, string emaill, char genderr)
{
    name = namee;
    email = emaill;
    gender = genderr;
}
string Author::getName()
{
    return name;
}
string Author::getEmail()
{
    return email;
}
char Author::getGender()
{
    return gender;
}
void Author::setEmail(string emaill)
{
    email = emaill;
}
void Author::print()
{
    cout << name << " (" << gender << ") at " << email << endl;
}
#endif // AUTHOR_CPP
