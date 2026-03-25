// Static Keyword

#include<iostream>
using namespace std;

class Stat
{
    public :
    static int a;


    static void changea(int val)
    {
        a = val;
    }

};

int Stat :: a = 10;

int main()
{

    Stat :: changea(5);

    cout << Stat :: a << endl;


    Stat s;

    cout << s.a << endl;
    
    s.changea(100);
    
    cout << s.a << endl;

    cout << Stat :: a << endl;

    

    
    
}