// Encapsulation : Wrapping up the data members and the member function into the single unit.

#include<iostream>
using namespace std;

class Student
{
    private :   // All data members in private scope

    string name;
    int roll;
    int age;
    int marks;

    public : // All member functions are in public scope to access data members

    void setter()
    {
        cout << "Enter the Data of Student : ";
        cin >> name >> roll >> age >> marks;
    }

    void getter()
    {
        cout << "The Information of the student : " << endl;
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << roll << endl;
        cout << "Age : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.setter();
    s.getter();
}