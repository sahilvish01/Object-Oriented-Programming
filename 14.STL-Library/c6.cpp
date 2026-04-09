#include<iostream>
// #include<vector>
#include<queue>
using namespace std;

int main()
{

    // Max Heap :
    priority_queue <int> q1;

    q1.push(10);
    q1.push(20);
    q1.push(1);
    q1.push(15);
    q1.push(2);



    cout << "Max Heap : ";

    int n = q1.size();
    for(int i = 0; i < n; i++)
    {
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl;

    // Min Heap :
    priority_queue <int, vector <int>, greater<int>> q2;

    q2.push(10);
    q2.push(13);
    q2.push(1);
    q2.push(30);
    q2.push(7);
    q2.push(4);

    
    cout << "Min Heap : ";

    n = q2.size();

    for(int i = 0; i < n; i++ )
    {
        cout << q2.top() << " ";
        q2.pop();
    }
    cout << endl;

    // Check Empty : 
    cout << "Max Heap is empty ? -> " << q1.empty() << endl;
    cout << "Min Heap is empty ? -> " << q2.empty() << endl;

}