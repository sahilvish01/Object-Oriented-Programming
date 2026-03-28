// Private Visiblity mode

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

class Derived : private Base
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

    d.z = 100;  // only z can be accessed because base class is inherited in private scope
    cout << d.z;
}