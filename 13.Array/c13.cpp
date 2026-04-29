// Pair Sum : Given sorted array in non decreasing order, there is a unique pair of element whose sum is equal to the target value

#include<iostream>
#include<vector>
using namespace std;


// Brute Force
vector <int> pairsum(vector <int> &arr, int k)
{
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == k)
            {
                return {i,j};
            }
        }
    }

    return {-1,-1};
}

int main()
{
    vector <int> v1 = {2,7,11,15};

    vector <int> v2 = pairsum(v1,9);

    for(int i : v2)
    {
        cout << i << endl;
    }   
}