// Vector Array : 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1;


    // For size and capacity :
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    // push and pop operations :
    v1.push_back(10);

    cout << endl;

    for(int i : v1)
    {
        cout << i << endl;
    }

    v1.pop_back();

    cout << endl;

    for(int i : v1)     // Won't run size = 0
    {
        cout << i << endl;
    }

    // Check Empty :
    cout << v1.empty() << endl;

    
    cout << "Size : " << v1.size() << endl;
    cout << "Capacity : "<< v1.capacity() << endl;


    cout << endl;


    for(int i = 1; i <= 5; i++)
    {
        v1.push_back(i*10);
    }


    v1.erase(v1.begin(), v1.end());     // Erase the range of elements, T.C. = O(n)

    cout << endl;

    for(int i : v1)
    {
        cout << i << endl;
    }


    cout << endl;

    for(int i = 1; i <= 5; i++)
    {
        v1.push_back(i*10);
    }


    cout << endl;

    // Access Index v1.at(index) or v1[index] 

    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << endl;
    }

    cout << endl;
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }


    cout << endl;
    // Intialization : 
    vector <int> v2(5,10);      //(size, initial value)

    for(int i : v2)
    {
        cout << i << endl;
    }

    cout << endl;

    // Creating Copy :
    vector <int> v3(v1);

    for(int i : v3)
    {
        cout << i << endl;
    }

    
}