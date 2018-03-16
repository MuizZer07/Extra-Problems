#ifndef ABOUTME_H_INCLUDED
#define ABOUTME_H_INCLUDED

//#include <string>
#include <iostream>

using namespace std;

class AboutMe
{
private :
    string name; int ID; int age;

public:
    AboutMe(string,int,int);
    void setName(string);
    void setAge(int);
    void setID(int);
    string getName();
    int getAge();
    int getID();
};

#endif // ABOUTME_H_INCLUDED

#ifndef ABOUTME_CPP_INCLUDED

#define ABOUTME_CPP_INCLUDED


#include "aboutMe.h"



AboutMe::AboutMe (string n, int a, int id)

{

name=n;
        age=a;
        ID=id;

}


void AboutMe::setName(string n)

{
        name=n;
    }


void AboutMe::setAge(int a)
    {
        age=a;
    }

void AboutMe::setID(int id)
    {
        ID=id;
    }

string AboutMe::getName()
    {
        return name;
    }

int AboutMe::getAge()
    {
        return age;
    }

int AboutMe::getID()
    {
        return ID;
    }



#endif //ABOUTME_CPP_INCLUDED


#include <iostream>

#include "aboutMe.h"


int main()


{

 AboutMe s1 ("Salman", 22, 1510956642);


cout <<"Your current information is \n Name : " << s1.getName()
 << "\n Age :" << s1.getAge () <<" \n ID :" <<s1.getID()<<endl;



 return 0;
    }


