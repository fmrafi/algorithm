#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int a,i,b,c,sum=0;
    cout<<"Enter ur number"<<endl;
    cin>>a;
    for(i=0;i<a;i++)
    {
        int j;
        cin>>j;
       s.push(j);

    }
    for(i=0;i<a;i++)
    {
      b=s.top();
      s.pop();
      sum=sum+b;
    }

    cout<<sum;
    return 0;

}
