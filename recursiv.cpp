#include<iostream>
using namespace std;
int re(int);
int main()
{
 int n;
 cout<<"Enter a number"<<endl;
 cout<<n<<re(n);
 return 0;
}
int se(int s)
{
    if(s>1)
        return s*se(s-1);
    else
        return 1;
}

