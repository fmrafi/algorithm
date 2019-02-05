 #include<iostream>
using namespace std;
int main()
{
int ara[15],result;
int n,m,i,j;
cout<<"Enter the number"<<endl;
cin>>n;
cout<<"Enter the elements:"<<endl;
for(i=0; i<n; i++)
{
cin>>ara[i];
}
for(i=0; i<n/2; i++)
{
if(ara[i]-ara[n-(i+1)]>0)
{
cout<<ara[i]<<"-"<<ara[n-(i+1)]<<"= positive"<<"= 1"<<endl;
}
else
{
cout<<ara[i]<<"-"<<ara[n-(i+1)]<<"= Negative"<<"= 0"<<endl;
}
}
}
