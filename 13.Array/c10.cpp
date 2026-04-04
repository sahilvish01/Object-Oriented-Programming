// Linear Search

#include<iostream>
#include<vector>
using namespace std;

int lsearch(vector <int> &nums,int key)
{
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector <int> arr = {4,6,7,3,6,1,2};

    cout << "Enter the key value : ";
    int key;
    cin >> key;
    cout << endl << "Index of " << key << " : " << lsearch(arr,key);
}