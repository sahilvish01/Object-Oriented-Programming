// Functions accepting nothing and returning premetive DT value (Area of Circle)

#include<iostream>
using namespace std;

class circle
{
    int rad;

    public :

    void putcircle();
    float areacal();
};

void circle :: putcircle()
{
    cout << "The Radius of Circle : ";
    cin >> rad;
}

float circle :: areacal()
{
    return 3.1415*rad*rad;
}

int main()
{
    circle c;

    c.putcircle();
    float area = c.areacal();

    cout << area;
}