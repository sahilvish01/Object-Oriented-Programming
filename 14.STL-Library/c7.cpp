// Set STL :

#include<iostream>
#include<set>
using namespace std;

int main()
{
    // Declaration :
    set <int> s1;

    // Insertion :
    s1.insert(10);
    s1.insert(4);
    s1.insert(7);
    s1.insert(3);

    s1.emplace(2);
    s1.emplace(3);      // Duplicate Element
    s1.emplace(4);      // Duplicate Element

    for(int i : s1)
    {
        cout << i << " ";
    }
    cout << endl;


    // Element ko delete karne ke liye :
    s1.erase(10);
    s1.erase(1);        // Already not present

    for(int i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Check karne ke liye element present hai ya nahi :
    cout << "2 is present ? -> " << s1.count(2) << endl;
    cout << "1 is present ? -> " << s1.count(1) << endl;

    // Accesing the itrator of the element :
    
    

}

