// Union of two sorted Arrays :

#include<iostream>
#include<vector>
using namespace std;

vector <int> unionofarr(const vector <int> &arr1,const vector <int> &arr2)
{
    vector <int> final;

    int i = 0, j = 0;

    while(i < arr1.size() && j < arr2.size())
    {
        if(arr1[i] < arr2[j])
        {
            if(!(final.empty()) && final.back() == arr1[i])
            {
                i++;
            }
            else
            {
                final.push_back(arr1[i]);
                i++;
            }
        }
        else if(arr1[i] > arr2[j])
        {
            if(!(final.empty()) && final.back() == arr2[j])
            {
                j++;
            }
            else
            {
                final.push_back(arr2[j]);
                j++;
            }
        }
        else
        {
            if(!(final.empty()) && final.back() == arr1[i])
            {
                i++,j++;
            }
            else
            {
                final.push_back(arr1[i]);
                i++,j++;
            }
        }
    }

    while(i < arr1.size())
    {
        if(!(final.empty()) && final.back() == arr1[i])
        {
            i++;
        }
        else
        {
            final.push_back(arr1[i]);
            i++;
        }
    }

    while(j < arr2.size())
    {
        if(!(final.empty()) && final.back() == arr2[j])
        {
            j++;
        }
        else
        {
            final.push_back(arr2[j]);
            j++;
        }
    }
    

    return final;
}


int main()
{
    vector <int> arr1 = {1, 2, 3, 3, 3};
    vector <int> arr2 = {1};

    vector <int> unionarr;

    unionarr = unionofarr(arr1,arr2);

    for(int i : unionarr)
    {
        cout << i << " ";
    }
}