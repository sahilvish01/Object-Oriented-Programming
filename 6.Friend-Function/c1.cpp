// Friend Function for single class

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :

    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void getstudent()
    {
        cout << real << " + i" << img << endl;
    }

    friend Complex Addcomplex(Complex,Complex);
};

Complex Addcomplex(Complex c1,Complex c2)
{
    Complex c3;

    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    return c3;
}

int main()
{
    Complex c1(2,1);
    Complex c2(3,6);

    Complex c3 = Addcomplex(c1,c2);

    c3.getstudent();
}