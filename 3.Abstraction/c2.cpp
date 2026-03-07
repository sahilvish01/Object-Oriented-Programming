// Funtions neither accepting nor returning (Employee class)

#include<iostream>
using namespace std;

class Emp
{
    string name;
    int id;
    int sal;

    public: 
    void getEmp();
    void putEmp();

};

void Emp :: getEmp()
{
    cout << "Name : " << name << endl;
    cout << "ID : " << id << endl;
    cout << "Salary : " << sal << endl;

}

void Emp :: putEmp()
{
    cout << "Enter the data of Employee : " << endl;
    cin >> name >> id >> sal;
}

int main()
{
    Emp e;

    e.putEmp();
    e.getEmp();
    

}