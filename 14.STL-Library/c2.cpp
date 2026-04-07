// Double Ended Queue(Deque):

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> d1;

    // Push Operations :
        d1.push_back(10);
        d1.push_front(20);

    for(int i : d1)
    {
        cout << i << endl;
    }

        d1.push_back(30);
        d1.push_back(40);

    // Pop Operations :
        d1.pop_back();
        d1.pop_front();

    for(int i : d1)
    {
        cout << i << endl;
    }

    // Check Empty :
        cout << d1.empty() << endl;

    // Erase :
        d1.erase(d1.begin(), d1.begin() + 1);   // agar .end() nahi to kaha tak jana hai voh include nahi karega

    for(int i : d1)
    {
        cout << i << endl;
    }

    

}

