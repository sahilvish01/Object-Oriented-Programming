// Vector Array :

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;         // Declaration
    vector <int> v1(5);     // Declaration with capacity
    vector <int> v2(5,1);   //  Decalaration with capacity and intialization with a value
    vector <int> v3(v2);    // Creating the copy of existing vector array

    cout << v.size() << endl;   //Size of vector array
    cout << v.capacity() << endl;   //Capacity of vector array

    v.push_back(10);

    for(int i : v)
    {
        cout << i << endl; 
    }

    for(int i : v1)
    {
        cout << i << endl;
    }

    for(int i : v2)
    {
        cout << i << endl;
    }

    for(int i : v3)
    {
        cout << i << endl;
    }

    cout << v2.size() << endl;
    cout << v2.capacity() << endl;   
    cout << v2[0] << endl;                           // accessing the elements
    cout << v2.at(0) << endl;                        // accessing the elements
    cout << v2.front() << endl;                      // accesing the front value
    cout << v2.back() << endl;                       // accessing the last value
    v2.pop_back();                                   // deleting the last value
    cout << v2.empty();                              // Check if the vector array is empty (boolean)
    v2.clear();                                      // Array ko pura clear karne ke liye

    for(int i : v2)
    {
        cout << i << endl;
    }

    
}