#include<stdio.h>
int  n=10;
void max_heapify(int A[],int i)
{
    int l,r,largest,temp;
    l=2*i;
    r=2*i+1;
    if(l<=n && A[l]>A[i])
    {
     largest=l;
    }
    else
        largest=i;
    if(r<=n && A[r]>A[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        temp=A[i];
        A[i]=A[largest];
        A[largest]=temp;
    }
    //max_heapify( A, largest)
}
int main()
{
    int A[20],n,i;
    freopen("input.txt","r",stdin);
    printf("enter your value\n");
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=1;i<n;i++)
    {
        printf("A[%d]=%d\n",i,A[i]);
    }
    max_heapify(A,1);
    return 0;
}


