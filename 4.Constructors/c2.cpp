// Parameterized Constructor

// (a) Single arguments 

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :

    Complex();      // Default Constructor
    Complex(int);
    void getComplex();
};

Complex :: Complex()    // Default Constructor
{
    real = img = 0;
}

Complex :: Complex(int val)
{
    real = img = val;
}

void Complex :: getComplex()
{
    cout << real << " + i" << img;
}

int main()
{
   Complex c1;
   Complex c2(10);
   
   c1.getComplex();
   cout << endl;
   c2.getComplex();
}