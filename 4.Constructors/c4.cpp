// Copy Constructor 

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :

    Complex();
    Complex(int);
    Complex(int,int);
    Complex(const Complex &);
    void getComplex();
};

Complex :: Complex()
{
    real = img = 0;
}

Complex :: Complex(int val)
{
    real = img = val;
}

Complex :: Complex(int r, int i)
{
    real = r;
    img = i;
}
Complex :: Complex(const Complex &c) // & - ise use karne se koi new memory nahi banegi, jo existance memory hai usi ko dusre naam se pahchanenge yaha
{                                    // const - ise use karne se memory ka reference keval "Read-only" mein pass hoga use modify nahi kar sakte 
    real = c.real;
    img = c.img;
}

void Complex :: getComplex()
{
    cout << real << " + i" << img << endl;
}

int main()
{
    Complex c1;
    Complex c2(5);
    Complex c3(2,4);
    Complex c4(c3);
    
    c1.getComplex();
    c2.getComplex();
    c3.getComplex();
    c4.getComplex();
}