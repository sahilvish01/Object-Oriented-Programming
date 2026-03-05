#include<iostream>
using namespace std;

class student
{
    int roll;
    string name;
    int sem;
    float SGPA;

    public :
    
    void putstudent()
    {
        cout << "Enter Student's Name : ";
        cin >> name;

        cout << "Enter Student's Roll No. : ";
        cin >> roll;

        cout << "Enter Semenster : ";
        cin >> sem;

        cout << "Enter Student's SGPA : ";
        cin >> SGPA;
    }

    void getstudent()
    {
        cout << "The Student of Roll No. " << roll << endl;

        cout << "Name : " << name << endl;
        cout << "Semester : " << sem << endl;
        cout << "SGPA : " << SGPA << endl;
    }
};

int main()
{

    student s[3];
    int size = sizeof(s)/sizeof(student);

    for(int i = 0; i < size; i++)
    {
        cout << endl;
        s[i].putstudent();
        
    }

    for(int i = 0; i < size; i++)
    {
        s[i].getstudent();
    }

}