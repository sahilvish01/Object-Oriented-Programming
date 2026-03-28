// Public Visiblity mode

#include<iostream>
using namespace std;

class Base
{
    private : 
                int a;
    protected :
                int b;
    public : 
                int c;

};

class Derived : public Base
{
    private :
                int x;
    protected : 
                int y;
    public :
                int z;

};

int main()
{

    Derived d;

    d.z = 100;
    d.c = 50;  // z and c both can be accessed because base class is inherited in public scope
    cout << d.z << endl << d.c;
}