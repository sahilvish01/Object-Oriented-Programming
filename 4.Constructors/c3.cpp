// Parameterized Constructor 

// (b) Multiple Args

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

void Complex :: getComplex()
{
    cout << real << " + i" << img << endl;
}

int main()
{
    Complex c1;
    Complex c2(10);
    Complex c3(10,5);
    
    c1.getComplex();
    c2.getComplex();
    c3.getComplex();
}