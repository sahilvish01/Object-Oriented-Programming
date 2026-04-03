// Find Unique (Brute Force) - Need Optimization

#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    

    for(int i = 0; i < size ; i++ )
    {
        int count = 0;
        for(int j = 0; j < size ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count < 2)
        {
          
            return arr[i];
        }
    }

    return -1;
}

int main()
{

    int arr[7] = {2,3,1,6,3,6,2};

    int unique = findUnique(arr,7);

    cout << unique;

}