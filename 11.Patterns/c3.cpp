// lower left Pyramid
//  * * *
//  * *
//  * 

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i<3; i++)
    {
        for(int j = 2; j >= i; j--)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
}