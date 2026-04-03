// Decimal to Binary  

#include<iostream>
using namespace std;

int main()
{
    long n,result = 0;
    cout << "Enter the decimal number : ";
    cin >> n;
    cout << "Binary of " << n << " : ";
    for(int pass=1 ; n!=0 ; pass = pass*10)
    {
        int bit = (n&1);
        // cout << bit;

        result = result + bit*pass;

        // n = n/2;
        n = n >> 1;
    }
    cout << result;
}