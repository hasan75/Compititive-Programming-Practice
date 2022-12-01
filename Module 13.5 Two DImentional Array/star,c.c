#include<stdio.h>
int main()
{
    int n=10,k=1,i,j;
    for(i=1;i<=n*2-1;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<n)k+=1;
        else k-=1;
    }
}
