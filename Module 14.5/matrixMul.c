#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }

    int n1,m1;
    scanf("%d %d",&n1,&m1);
    int arr[n1][m1];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
            scanf("%d",&arr[i][j]);
    }

    int ans[n][m1],temp=0;

    if(m == n1)
    {
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m1;j++)
            {
                for(int k=0;k<m1;k++)
                {
                    temp += a[i][k]*arr[k][j];
                }
                ans[i][j]= temp;
                //a[i][0]*arr[0][j] + a[i][1]*arr[1][j]+ a[i][2]*arr[2][j];
                temp=0;
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m1;j++)
            {
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("Multiplication is not possible!\n");
    }

}
