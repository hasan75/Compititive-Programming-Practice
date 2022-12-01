#include<stdio.h>
#include<math.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the Row and Column of first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the row and column of second matrix:\n");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("First matrix's column should be equal to the second matrix's row.Please Enter again!\n");
        printf("Enter the Row and Column of first matrix:\n");
        scanf("%d %d",&r1,&c1);
        printf("Enter the row and column of second matrix:\n");
        scanf("%d %d",&r2,&c2);
    }

    int a[r1][c1],arr[r2][c2],ans[r1][c2];
    printf("Enter the first matrix:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the second matrix:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Answer Matrix is: \n");
    int sum=0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
           for(int k=0;k<c1;k++)
           {
               sum+=a[i][k]*arr[k][j];
           }
           ans[i][j]=sum;
           sum=0;
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }



}
