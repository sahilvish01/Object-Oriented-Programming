// Find Largest in the Array 

#include<iostream>
using namespace std;

int arrlarge(int arr[], int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {2,7,3,1,6};

    int size = sizeof(arr)/sizeof(int);

    int large = arrlarge(arr,size);
    
    cout << "Largest : " << large;
}