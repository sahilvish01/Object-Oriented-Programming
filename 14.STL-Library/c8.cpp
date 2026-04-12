// Multiple Set

#include<set>
#include<iostream>
using namespace std;

int main()
{
    multiset <int> s1;

    s1.insert(10);
    s1.insert(10);      //Duplicate
    s1.insert(15);
    s1.insert(12);
    s1.insert(1);

    s1.emplace(8);
    s1.emplace(5);

    for(int i : s1)
    {
        cout << i << " ";
    }
    cout << endl;
}
