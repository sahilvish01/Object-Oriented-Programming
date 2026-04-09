// Queue STL :

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> q1;

    // Push 
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    q1.push(70);
    q1.push(80);
    q1.push(90);
    q1.push(100);

    // Front and Rear Value :
    cout << "Front : " << q1.front() << " Rear : " << q1.back() << endl;


    // int n = q1.size();

    // Pop
    for(int i =0; q1.size() ; i++)
    {
        cout << q1.front() << endl;
        q1.pop();
    }

    // Check Empty
    cout << "Check Empty or not : " << q1.empty() << endl;

    
    
}