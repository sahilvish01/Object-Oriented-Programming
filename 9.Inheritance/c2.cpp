// Protected Visiblity mode

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

class Derived : protected Base
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

    d.z = 100;  // only z can be accessed because base class is inherited in protected scope
    cout << d.z;
}