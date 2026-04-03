// Binary to Decimal (Witout bitwise)

#include<iostream>
using namespace std;

int main()
{
    int n, result = 0 ;

    cout << "Enter the Binary Number : ";
    cin >> n;

    cout << "Decimal of : " << n  << " : "; 
    for(int i = 1; n != 0 ; n = n/10, i = i*2)
    {
        int bit = n % 10;

        result = result + bit*i;
    }

    cout << result;
    
}
