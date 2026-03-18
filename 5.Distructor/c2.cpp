// Distructer for Dynamic Constructor

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int roll;
    char *name;
    char *fname;
    int age;

    public :

    Student(int r,const char* n,const char* f, int a)
    {
        roll = r;
        int l = strlen(n);
        name = new char[l+1];
        strcpy(name,n);

        l = strlen(f);
        fname = new char[l+1];
        strcpy(fname,f);
        age = a;
    }

    ~Student()
    {
        delete name;
        delete fname;
    }

    void getstudent()
    {
        cout << "Name : " << name << endl;
        cout << "Father's Name : " << fname << endl;
        cout << "Roll No. : " << roll << endl;
        cout << "Age : " << age << endl; 
    }
};

int main()
{
    Student s(18,"Virat","India",35);
    s.getstudent();
}