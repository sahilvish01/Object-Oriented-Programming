// Duplicate in array : 

// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

#include<iostream>
using namespace std;

int finddupli(int arr[], int size)
{
    int arrsum = 0, sum = 0;
    for(int i = 0; i < size; i++)
    {
        arrsum += arr[i];
        sum += i;
    }

    return (arrsum - sum);
}

int main()
{
    int arr[] = {4,2,1,3,1};

    int size = sizeof(arr)/sizeof(int);

    int dupli = finddupli(arr,size);

    cout << dupli;

}