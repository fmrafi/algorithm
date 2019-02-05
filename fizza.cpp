#include<iostream>
using namespace std;
int re(int);
/*int se(int n)
{
    if (n>1)
    return n+1;
    else
        return 1;
}*/

int display(int n)
{
    int p=1;
    p=(p*(n-1)+n)+2;
    return p;
}
int main()
{
    int s,n,a;
    cin>>n;
    s=display(n);
    cout<<s;
    return 0;
}
