// Functions accepting objects and returning nothing (Complex Number)

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :
    void putcomp();
    void sumcomp(Complex,Complex);
};

void Complex :: putcomp()
{
    cout << "Enter the Real and Imaginary value : ";
    cin >> real >> img;
}

void Complex :: sumcomp(Complex c1,Complex c2)
{
    Complex c3;

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    cout << endl << "Sum : " << c3.real << " + " << c3.img << "i" << endl;
}

int main()
{
    Complex c1,c2,c3;

    c1.putcomp();
    c2.putcomp();

    c1.sumcomp(c1,c2);

    
}