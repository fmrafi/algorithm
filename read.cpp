#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int A[20],n,i;
    ifstream myfile("input.txt");
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n;i++)
    {
        myfile>>A[i];
        cout<<A[i];
    }
    myfile.close();
    return 0;

}
