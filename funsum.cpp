#include<iostream>
using namespace std;
int display(int a,int b)
{
    int s;
    if(b==0)
    {
     return a;
    }
    else
        return display(b,a%b);
}
int main()
{
    int a,b,s;
  cin>>a>>b;
  s=display(a,b);
  cout<<s;
  return 0;
}
