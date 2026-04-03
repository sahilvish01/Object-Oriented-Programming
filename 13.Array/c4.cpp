// Duplicate in array : 

#include<iostream>
using namespace std;

int finddupli(int arr[],int size)
{
    int xarr=0,xreal=0;
    for (int i = 0; i < size; i++)
    {
        xarr ^= arr[i];
        xreal ^= i;
    }

    return (xarr^xreal);
}

int main()
{
    int arr[] = {4,2,1,3,1};

    int size = sizeof(arr)/sizeof(int);

    int dupli = finddupli(arr,size);

    cout << dupli;

}