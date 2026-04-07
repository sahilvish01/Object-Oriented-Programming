// List (Doubly Linked List) : 

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1;

    // Push Operations :
        l1.push_back(10);
        l1.push_front(20);
    
        l1.push_back(30);
        l1.push_back(40);

    for(int i : l1)
    {
        cout << i << endl;
    }

    // Pop Back : 
        l1.pop_front();
        l1.pop_back();

    for(int i : l1)
    {
        cout << i << endl;
    }

    // For Size :
        cout << l1.size() << endl;

    // Erase :
        l1.erase(l1.begin(), l1.end());     // Erased all

    for(int i : l1)     // Won't Run
    {
        cout << i << endl;
    }

}