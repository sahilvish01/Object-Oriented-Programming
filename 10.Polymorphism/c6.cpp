// Runtime Polymorphism : Classes with only pure virtual funtion and virtual distructor (Interface)

#include<iostream>
using namespace std;

class Base              // Interface
{
    public : 
    
    virtual void method1() = 0;
    virtual void method2() = 0;

    ~Base()
    {
        cout << endl << "Memory Deallocated" ;
    }
};

class Derived : public Base
{
    public :

    void method1()
    {
        cout << endl << "Method 1";
    }

    void method2()
    {
        cout << endl << "Method 2";
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b -> method1();
    b -> method2();
}