#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int a,b;
    s.push(5);
    s.push(9);
    s.push(1);
    s.push(2);
    //s.top();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top();
}
