// Operator Overloading

// Syntax :

// Return_type Class_name :: operator op_symbol(arguements)
// {

// }

#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public :

    Complex(const int &real = 0, const int &img = 0)
    {
        this->real = real;
        this->img = img;
    }

    void operator ++ ()
    {
        real += 1;
        img += 1;
    }

    Complex operator + (const Complex &c)
    {
        Complex res;

        res.real = real + c.real;
        res.img = img + c.img;

        return res;
    }

    void display()
    {
        cout << endl << real << " + i" << img;
    }
};

int main()
{
    Complex c1(4,6),c2(3,9),c3;

    c1.display();

    ++c1;

    c1.display();

    c3.display();


    c3 = c1 + c2;

    c3.display();
}