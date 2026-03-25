// Friend function for multiple class

#include<iostream>
using namespace std;

class Mng;

class Emp
{
    int empdid;     // department ID
    string name;
    int sal;

    public :

    Emp()
    {
        cout << "Enter the data of Employee : ";
        cin >> name >> empdid >> sal;
    }

    void getemp()
    {
        cout << "Emp Name : " << name << endl;
        cout << "Dept. Id : " << empdid << endl;
        cout << "Salary : " << sal << endl;
    }

    friend bool Checkdept(Emp,Mng);
};

class Mng
{
    int mngdid;
    string name;
    int sal;

    public :

    Mng()
    {
        cout << "Enter the data of Manager : ";
        cin >> name >> mngdid >> sal;
    }

    void getmng()
    {
        cout << "Manager Name : " << name << endl;
        cout << "Dept. Id : " << mngdid << endl;
        cout << "Salary : " << sal << endl; 
    }

    friend bool Checkdept(Emp,Mng);
};

bool Checkdept(Emp e, Mng m)
{
    if(e.empdid == m.mngdid)
    {
        return true;
    }
    return false;
}

int main()
{
    Emp e;
    Mng m;

    if(Checkdept(e,m))
    {
        cout << "Department is same";
    }
    else
    {
        cout << "Department is not same";
    }
}