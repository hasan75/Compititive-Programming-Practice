#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int r=3,c=3;
    int mat[r][c];
    int tmat[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The transpose matrix is: \n");


    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
