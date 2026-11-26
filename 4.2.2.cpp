#include<iostream>
using namespace std;
class Person
{
public:
virtual void walk()
{
cout<<"This person walks slow"<<endl;
}
};

class Student: public Person
{
public:
void walk()
{
cout<<"This person walks fast";
}
};

int main()
{
Person *ptr;
Student s;
ptr=&s;
ptr->walk();
return 0;
}


