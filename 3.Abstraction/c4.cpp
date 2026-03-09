// Functions accepting premetive DT value and returning nothing (Calculate total salary of employee)

#include<iostream>
using namespace std;

class Emp
{
    string name;
    int id;
    int sal;

    public : 

    void putEmp();
    void getEmp();
    void caltsalary(int);
};

void Emp :: putEmp()
{
    cout << "Enter the data of employee : ";
    cin >> name >> id >> sal;
}

void Emp :: getEmp()
{
    cout << endl << "The data of Employee : ";
    cout << endl << "Name : " << name;
    cout << endl << "ID : " << id;
    cout << endl << "Salary : " << sal;
}

void Emp :: caltsalary(int pf)
{
    cout << "Total Salary : " << sal + pf;
}

int main()
{
    Emp e;

    e.putEmp();
    e.getEmp();
    cout << endl;
    e.caltsalary(10000);
}