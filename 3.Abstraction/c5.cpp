// Functions accepting premetive DT value and returning premetive DT value (Calculate Total Salary of Employee)

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
    int getsal(Emp);
    int caltsal(int);
};

void Emp :: putEmp()
{
    cout << "Enter the data of Employee : ";
    cin >> name >> id >> sal;
}

void Emp :: getEmp()
{
    cout << "Name : " << name << endl;
    cout << "ID : " << id << endl;
    cout << "Salary : " << sal << endl;
}

int Emp :: getsal(Emp e)
{
    return e.sal;
}

int Emp :: caltsal(int pf)
{
    return sal + pf;
}

int main()
{
    Emp e1,e2;
    e1.putEmp();
    e2.putEmp();
    e1.getEmp();
    e2.getEmp();

    int total = e1.caltsal(10000);

    cout << endl << "Total Salary : " << total;
}