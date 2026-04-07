// Finding missing element from the array that contains contigeous number

#include<iostream>
#include<vector>
using namespace std;

int findmissing(vector<int> &arr)
{
    int i = 1;
    int ans = 0;
    while(i<=arr.size())
    {
        ans ^= arr[i-1];
        ans ^= i;
        i++;
    }

    ans ^= i;

    return ans;
}

int main()
{
    vector <int> arr = {8, 2, 4, 5, 3, 7, 1};

    cout << findmissing(arr);

}