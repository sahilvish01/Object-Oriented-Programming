// Default constructor

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :

    Complex();
    void getComplex();
};

Complex :: Complex()
{
    real = img = 0;
}

void Complex :: getComplex()
{
    cout << real << " + i" << img;
}

int main()
{
    Complex c;

    c.getComplex();
}