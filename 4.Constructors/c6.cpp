// Dynamic Constructor 

// Syntax of Dynamic Memory Allocation :

// Datatype *ptr;
// ptr = new Datatype[size];


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

    Student();
    Student(int , const char*,const char*,int );
    void getstudent();
};

// Student :: Student()
// {
//     roll = 0;
//     name = "";
//     fname = "";
//     age = 0;
// }

Student :: Student(int r,const char *n, const char *f,int a)
{
    roll = r;

    // Calculate the required memory
    int l = strlen(n);

    // Allocate the memory
    name = new char[l+1];  //+1 for '\0'(null character)

    // Assign the value
    strcpy(name,n);

    l = strlen(f);
    fname = new char[l+1];
    strcpy(fname,f);

    age = a;

    delete n,f;
    
}

void Student :: getstudent()
{
    cout << "Name : " << name << endl;
    cout << "Father Name : " << fname << endl;
    cout << "Roll No. : " << roll << endl;
    cout << "Age : " << age << endl;
}


int main()
{
    // Student s1;
    Student s2(18,"Virat","India",35);

    // s1.getstudent();
    s2.getstudent();
}