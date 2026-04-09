// Stack STL :

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s1;

    // Push
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    int n = s1.size();

    // Pop
    for(int i = 0; i < n; i++)
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    // Check Empty 
    cout << "Empty or not : " << s1.empty() << endl;

}