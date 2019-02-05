#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[100],i,n;
    float sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       sum=sum+a[i];
    }
        cout<<"The sum is:"<<sum<<endl;

    sum=sum/n;
    //for(c=0;c<=b;c++)

        printf(" avg is %.2f",sum);


    return 0;
}
