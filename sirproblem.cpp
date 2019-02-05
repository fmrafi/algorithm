#include<iostream>
using namespace std;
int main()
{
    int array[20],i,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n/2;i++)
    {
        if(array[i]-array[n-i-1]>=0)
        {
            cout<<array[i]<<"-"<<array[n-i-1]<<"=Positive"<<"=1"<<endl;
        }
        else
        {
            cout<<array[i]<<"-"<<array[n-i-1]<<"=Negative"<<"=0"<<endl;
        }
    }
    return 0;
}
