// Find the maxsubarray sum and also print the subarray (Kadane's Algo Extended Version)

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSubArr(vector <int>& nums)
{
    int sum = 0;
    int maxSum = INT_MIN;
    int start = 0;
    int end = 0;
    int currStart = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(sum == 0)
        {
            currStart = i;
        }

        sum += nums[i];

        if(maxSum < sum)
        {
            maxSum = sum;
            start = currStart;
            end = i;
        }

        if(sum < 0)
        {
            sum = 0;
        }

    }

    for(int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }

    return maxSum;
}

int main()
{
    vector <int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int maxSum = MaxSubArr(arr);

    cout << endl << "Maximmum Subarray Sum: " << maxSum << endl;
}