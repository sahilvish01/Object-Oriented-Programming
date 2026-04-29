// Pair Sum : Given sorted array in non decreasing order, there is a unique pair of element whose sum is equal to the target value

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// Optimal Approach but uses extra space
vector <int> pairsum(vector <int> &arr, int k)
{

    unordered_map <int,int> mpp;

    for(int i = 0; i < arr.size(); i++)
    {
        int secval = k - arr[i];

        if(mpp.find(secval) != mpp.end())
        {
            return {mpp[secval], i};
        }

        // mpp[arr[i]] = i;
        mpp.emplace(arr[i], i);
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