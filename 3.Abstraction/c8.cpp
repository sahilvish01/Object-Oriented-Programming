// Functions accepting objects and returning object (Compare Salary of Enployees)

#include<iostream>
using namespace std;

class Emp
{
    int ID;
    int sal;
    string name;

    public :

    void putEmp();
    void getEmp();
    Emp compsal(Emp,Emp);
};

void Emp :: putEmp()
{
    cout << "Enter the data : ";
    cin >> name >> ID >> sal;
}

void Emp :: getEmp()
{
    cout << "Name : " << name << endl;
    cout << "ID : " << ID << endl;
    cout << "Salary : " << sal << endl;
}

Emp Emp :: compsal(Emp e1, Emp e2)
{
    if(e1.sal > e2.sal)
    {
        return e1;
    }
    return e2;
}

int main()
{
    Emp e1,e2;

    e1.putEmp();
    e2.putEmp();

    e1.getEmp();
    e2.getEmp();

    Emp e3 = e1.compsal(e1,e2);

    e3.getEmp();

}