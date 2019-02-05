#include<iostream>
using namespace std;
int main()
{
    int a[5],i,j,n,min,loc;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       // min=a[i];
    }
    //min=a[o];
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
            min=a[i];
    }
    cout<<min;
}
