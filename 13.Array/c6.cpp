// Second Largest in Array

#include<iostream>
#include<limits.h>
using namespace std;

int seclarge(int arr[], int size)
{
    int largest = arr[0];
    int slargest = INT_MIN;

    for(int i = 1; i < size; i++)
    {
        if(largest < arr[i])
        {
            slargest = largest;
            largest = arr[i];
        }
        else if(slargest < arr[i] && arr[i] < largest)
        {
            slargest = arr[i];
        }
    }

    return slargest;
}

int main()
{
    int arr[5] = {7,7,3,1,6};

    int size = sizeof(arr)/sizeof(int);

    int slarge = seclarge(arr,size);
    
    cout << "Second Largest : " << slarge;
}