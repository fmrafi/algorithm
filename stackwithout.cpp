#include<iostream>
using namespace std;
int s[100];
int stop=-1;
int top()
{
    return s[stop];
}
bool empty()
{
    if(stop==-1)
        return true;
    else return false;
}
void push(int c)
{
    s[stop+1]=c;
    stop++;
}
void pop()
{
    stop--;
}
int size()
{
    return stop+1;
}
int main()
{
 int a,b,sum=0,n,i;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>a;
     push(a);
 }
 for(i=0;i<n;i++)
 {
     b=top();
     pop();
     sum=sum+b;
 }
 cout<<sum;
 return 0;
}
