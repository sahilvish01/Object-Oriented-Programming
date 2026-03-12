// Functions accepting objects and returning premetive DT value (Compare Salary of Enployees)

#include<iostream>
using namespace std;

class Emp
{
    private:

    string name;
    int ID;
    int sal;

    public:
    void putEmp();
    void getEmp();
    int compsal(Emp,Emp);
};

void Emp :: putEmp()
{
    cout << "Enter the Data : ";
    cin >> name >> ID >> sal;
}

void Emp :: getEmp()
{
    cout << "Name : " << name << endl;
    cout << "ID : " << ID << endl;
    cout << "Salary : " << sal << endl;
}

int Emp :: compsal(Emp e1, Emp e2)
{
    if(e1.sal > e2.sal)
    {
        return 1;
    }
    return 2;
}

int main()
{
    Emp e1,e2;

    e1.putEmp();
    e2.putEmp();

    e1.getEmp();
    e2.getEmp();

    int val = e1.compsal(e1,e2);

    

    cout << endl << val;
}
