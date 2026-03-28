// Runtime Polymorphism : Classes with pure virtual functions (Abstract class)

#include<iostream>
using namespace std;

class Base                              // Abtract class
{
    public :

    virtual void method1()              // virtual function
    {
        cout << "Base Virtual";
    }

    virtual void method2() = 0;         // Pure virtual function

    virtual ~Base()
    {
        cout << endl << "Memory deallocated" ; 
    }
};


class Derived : public Base
{
    public : 

    void method2()
    {
        cout << endl << "Pure virtual overrided";
    }
    
    void method1()              
    {
        cout << endl << "Derived Virtual";
    }

    ~Derived()
    {

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
