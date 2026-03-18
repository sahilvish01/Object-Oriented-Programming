// Parameterized Constructor with default arguements

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :

    Complex(int,int);
    void getComplex();
};

Complex :: Complex(int r,int i=0)
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
    // Complex c1;
    Complex c2(10);
    Complex c3(2,4);

    // c1.getComplex();
    c2.getComplex();
    c3.getComplex();

}