#include<stdio.h>
int main()
{
    int A[20],n,i;
    freopen("input.txt","r",stdin);
    printf("enter ur value\n");
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
