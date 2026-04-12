// Unorder set : MOST IMPORTANT

// T.C. of insertion, deletion, searching etc : O(n)

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1 = {2,3,5,7,8,9,4};

    


    unordered_set <int> s1;     // Stores element in Random Order

    s1.insert(9);
    s1.insert(4);
    s1.insert(6);
    s1.insert(8);
    s1.insert(2);
    
    s1.emplace(7);
    s1.emplace(5);
    s1.emplace(3);
    s1.emplace(3);      //Duplicate

    for(int i : s1)     
    {
        cout << i << " ";
    }
    cout << endl;


    // Deletion :
    s1.erase(2);
    s1.erase(5);


    for(int i : s1)     
    {
        cout << i << " ";
    }
    cout << endl;

    // Element present hai check
    cout << "4 is present ? -> " << s1.count(4);
}