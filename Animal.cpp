#include <iostream>
using namespace std;
class Animal
{
public:
void eat()
{
cout<<"eating"<<endl;
}
};

class Dog: public Animal
{
public:
void bark()
{
cout<<"barking";
}
};

int main()
{
Dog d;
d.bark();
return 0;
}
