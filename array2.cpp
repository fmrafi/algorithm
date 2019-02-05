#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,A;
    float sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
         A=a[0]-a[i];
    }
    if(i==A)
    {
        cout<<"positive"<<A;
    }
    else
        cout<<"negative"<<A;

}
