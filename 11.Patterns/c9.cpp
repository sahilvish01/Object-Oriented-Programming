// Hollow Diamond

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N : ";
    cin >> n;
    
    for(int i= 0; i <=n ; i++)
    {
        for(int j = n;j>= i ; j--)
        {
            cout << " "; 
        }

        cout << "*";

        for(int j = 1 ; j <= i ; j++)
        {
            cout << " ";

        }

        for(int j = 2 ; j <=i; j++)
        {
            cout << " ";
        }

        if(i>0)
        {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0 ; j<= i ;j++)
        {
            cout << " ";
        }

        cout << "*";

        for(int j = n-1 ; j >= i ; j--)
        {
            cout << " ";
        }

        for(int j = n-2; j>=i; j--)
        {
            cout << " "; 
        }

        if(i < n)
        {
            cout << "*";
        }
        cout << endl;
    }
}