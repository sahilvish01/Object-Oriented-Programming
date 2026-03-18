#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int roll;
    string name;
    string fname;
    int age;

    public :

    Student()
    {
        roll = 0;
        name = " ";
        fname = " ";
        age = 0;
    }

    Student(int r,const string &n,const string &f,int a)
    {
        roll = r;
        // strcpy(name,n);
        // strcpy(fname,f);
        name = n;
        fname = f;
        age = a;
    }

    ~Student()
    {

    }

    void getStudent()
    {
        cout << "Name : " << name << endl;
        cout << "Father Name : " << fname << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Age : " << age << endl;
    }

};

int main()
{
    Student s(18,"Virat","India",35);

    s.getStudent();

    cout << sizeof(s);

}