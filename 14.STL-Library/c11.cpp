// Unordered Map :

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    unordered_map <int,string> m1;

    m1[1] = "Sahil";
    m1[1] = "Keshav";
    m1[1] = "Radhe";
    m1[4] = "Cheeku";
    m1[2] = "Virat";
    m1[3] = "Kohli";
    
    for(auto i : m1)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << endl;

    // Erase
    m1.erase(2);

    for(auto i : m1)
    {
        cout << i.first << " : " << i.second << endl;
    }
    cout << endl;

    // Insertion :
    m1.emplace(10, "hahaha");

    for(auto i : m1)
    {
        cout << i.first << " : " << i.second << endl;
    }

}