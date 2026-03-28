// Single level Inheritacne with public visiblity mode

#include<iostream>
using namespace std;

class Student 
{
    string name;
    int roll;

    public :
    void getstudent();
    void setstudent();
};

class Result : public Student
{
    int m1,m2,m3,m4,m5;

    public :
    void setmarks();
    void getmarks();
    void calmarks();
    
};

void Student :: getstudent()
{
    cout << endl << "Name : " << name ;
    cout << endl << "Roll No : " << roll ;
}

void Student :: setstudent()
{
    cout << endl << "Enter the Name and Roll No. : ";
    cin >> name >> roll;
}

void Result :: setmarks()
{
    cout << endl << "Enter the marks of Student : ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
}

void Result :: getmarks()
{
    cout << endl << "m1 : " << m1;
    cout << endl << "m2 : " << m2;
    cout << endl << "m3 : " << m3;
    cout << endl << "m4 : " << m4;
    cout << endl << "m5 : " << m5;
}

void Result :: calmarks()
{
    float p = (float)(m1+m2+m3+m4+m5)/5;

    if(m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33)
    {
        cout << endl << "Result : Fail and " << "Percentage : " << p;
    }
    else
    {
        cout << endl << "Result : Pass and " << "Percentage : " << p;
    }
}

int main()
{

    Result r;

    r.setstudent();
    r.setmarks();
    r.getstudent();
    r.getmarks();
    r.calmarks();
}