#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=1;i<=n;i++)
    {
        printf("row-%d and column-%d =   ",i,i);
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                printf("%d ",arr[i][j]);
            }
        }
        for(int k=1;k<=n;k++)
        {
            if(i!=k)
            {
                printf("%d ",arr[k][i]);
            }
        }
        printf("\n");
    }
}
