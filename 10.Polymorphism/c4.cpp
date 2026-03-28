// Runtime Polymorphism : Classes with virtual functions

#include<iostream>
using namespace std;

class Base
{
    public :

    virtual void method()
    {
        cout << "Base" ;
    }
};

class Derived : public Base
{
    public : 
    
    void method()
    {
        cout << "Derived";
    }
};


int main()
{
    Base *b;
    Derived d;
    b = &d;
    b -> method();
}