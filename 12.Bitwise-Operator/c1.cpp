// Bitwise Operators

#include<iostream>
using namespace std;

int main()
{
    int a =2;
    int b = 6;

    
    cout << "a&b : " << (a&b) << endl;         // Bitwise AND
    cout << "a|b : " << (a|b) << endl;         // Bitwise OR
    cout << "~a : " << (~a) << endl;           // Bitwise NOT
    cout << "~a : " << (~b) << endl;           // Bitwise NOT
    cout << "a^b : " << (a^b) << endl;         // Bitwise XOR
    cout << "a << 2 : " << (a << 2) << endl;   // Left shift
    cout << "b << 2 : " << (b << 2) << endl;   // Left shift
    cout << "a >> 1 : " << (a >> 1) << endl;   // Right shift
    cout << "b >> 1 : " << (b >> 1) << endl;   // Right shift
}