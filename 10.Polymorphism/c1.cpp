// Function overloading 

#include<iostream>
using namespace std;

void add(int a, int b)
{
    cout << endl << a + b;
}

void add(float a, int b)
{
    cout << endl << a + b;
}

void add(int a, float b)
{

    cout << endl << a + b;

}

void add(int a, int b, int c)
{
    cout << endl << a + b + c;
}


int main()
{
    add(3,2);
    add(3,(float)2.4);      // 2.4 is considered as 'double' by default
    add((float)5.6,6);  
    add(4,5,7);
}