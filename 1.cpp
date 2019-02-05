#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,j;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];

    }
        if(n%a[i]!=1)
        {
            cout<<"Prime"<<i;
        }
        else
            cout<<"Not prime"<<i;
            return 0;

}
