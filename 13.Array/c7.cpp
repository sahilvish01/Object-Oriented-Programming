// STL ARRAY

#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> arr = {3,4,5,7,6};

    for(int i : arr)
    {
        cout << i << " ";
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr.at(i);
    }
    
    for(int i : arr)
    {
        cout << i << " ";
    }

    cout << arr.size() << endl; // size pf array
    cout << arr.at(0) << endl; // accessing the array
    cout << arr[0] << endl; // accesing the array
    cout << arr.front(); // Accessing front value
    cout << arr.back(); // Accessing Last value

}