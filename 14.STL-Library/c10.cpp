// Map -> Internally height Balnced Tree

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int,string> m1;        // map <key,value>

    m1[1] = "Sahil";
    m1[1] = "Keshav";            // Duplicate key
    m1[19] = "hehe";
    m1[3] = "ronaldo";
    m1[4] = "Virat";

    int n = m1.size();

    for(auto i : m1)
    {
        cout << "Key : " << i.first << ", Value : " << i.second << endl;
    }
    cout << endl;


    // Deletion :
    m1.erase(19);

    for(auto i : m1)
    {
        cout << "Key : " << i.first << ", Value : " << i.second << endl;
    }
    cout << endl;
    

    // Insertion :
    m1.emplace(10,"hehe");

    for(auto i : m1)
    {
        cout << "Key : " << i.first << ", Value : " << i.second << endl;
    }
    cout << endl;

    // Element check karne ke liye present hai ya nahi :
    // cout << "\"Keshav\" is present in map ? -> " << m1.count(1);
}