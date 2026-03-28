// Runtime Polymorphism : Function overriding

#include<iostream>
using namespace std;

class Base 
{
    public :

    void method()
    {
        cout << "Base";
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
    Derived d;

    d.method();
}