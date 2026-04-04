// Rotate Array :

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int rot[5];
    int size = 5;

    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << endl;
    int k = 2;

    for(int i = 0; i < size; i++)
    {
        rot[i] = arr[(i+k)%size];
    }

    for(int i : rot)
    {
        cout << i << " ";
    }
    

}