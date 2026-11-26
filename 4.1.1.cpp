#include<iostream>
using namespace std;
class Calculator
{
private: 
int num;
public:
int add(int a, int b)
{
return a+b;
}

int add(int a, int b, int c)
{
return a+b+c;
}
};

int main()
{
Calculator c;
cout<<"The sum of a & b is: \n"<<c.add(5,9);
cout<<"The sum of a & b & c is: "<<c.add(2,9,4);
return 0;
}
