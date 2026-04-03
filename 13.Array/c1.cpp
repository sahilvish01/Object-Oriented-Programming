// Swap Alernates

#include<iostream>
using namespace std;

void swapalt(int arr[], int size)
{
    for(int i = 1; i < size; i += 2)
    {
        int t = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = t;
        
        
    }
}

int main()
{
    int arr[6] = {3,4,7,8,5,6};

    int size = sizeof(arr)/sizeof(int);


    swapalt(arr,size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}