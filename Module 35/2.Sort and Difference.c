#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n+1];
    int B[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int j=0;j<n;j++)
    {
        scanf("%d",&B[j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(B[j]<B[j+1])
            {
                int temp = B[j];
                B[j]=B[j+1];
                B[j+1]=temp;

            }
        }
    }

    for(int k=0;k<n;k++)
    {
        printf("%d ",A[k]-B[k]);
    }
    return 0;
}
