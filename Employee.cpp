#include<iostream>
using namespace std;
class Employee
{
public:
int employee_id;
float salary,bonus,total;
string name;
Employee()
{
employee_id=0;
salary=0;
bonus=0;
total=0;
name="unknown";
}

Employee(int id, float s, float b, string n)
{
employee_id=id;
salary=s;
bonus=b;
name=n;
}

void  calculate()
{
total=salary+bonus;
}

void display()
{
cout<<"Employee Name: "<<name<<endl;
cout<<"Employee Id: "<<employee_id<<endl;
cout<<"Salary before bonus: "<<salary<<endl;
cout<<"Salary after bonus: "<<total;
}
};

int main()
{
Employee e1;
e1.display();
Employee e2(123,100000,12000,"Aditya");
e2.display(); 
return 0;
} 


