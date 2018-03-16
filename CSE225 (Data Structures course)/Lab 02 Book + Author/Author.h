#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
#include <iostream>
using namespace std;

class Author
{
private:
    string name, email;
    char gender;
public:
    Author(string, string, char);
    string getName();
    string getEmail();
    char getGender();
    void setEmail(string);
    void print();
};
#endif // AUTHOR_H
