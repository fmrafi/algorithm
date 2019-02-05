#include<iostream>
#include<stdio.h>
#define SZ 100
using namespace std;
int N;

int LEFT(int i)
{
    return i*2;
}

int RIGHT(int i)
{
    return i*2+1;
}


void MAX_HEAPIFY(int A[], int i)
{
  int l=LEFT(i);
  int r=RIGHT(i);
  int largest;

  cout<<"L= "<<l<<endl;
  cout<<"R= "<<r<<endl;

  if(l<=N && A[l]>A[i])
    largest = l;
  else
    largest = i;


  if(r<=N && A[r]>A[largest])
    largest = r;

  if(largest!=i)
  {
     int temp=A[i];
     A[i]=A[largest];
     A[largest]=temp;
  }



}


int main()
{

  freopen("input.txt","r",stdin);

  int  A[SZ];

  cin>>N;
  cout<<"Enter Size: "<<N<<endl;

  for(int i=1;i<=N;i++)
  {
    cin>>A[i];
    cout<<"A["<<i<<"]: "<<A[i]<<endl;
  }


  MAX_HEAPIFY(A,1);


  cout<<"MAX_HEAPIFY OUTPUT: "<<endl;

  for(int i=1;i<=N;i++)
  {
    cout<<"A["<<i<<"]: "<<A[i]<<endl;
  }


  return 0;
}


