#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    int a,i,b,c,j,sum=0;
    cout<<"Enter ur number"<<endl;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>j;
       q.push(j);

    }
    for(i=0;i<a;i++)
    {
      b=q.front();
      q.pop();
      sum=sum+b;
    }

    cout<<sum;
    return 0;

}

