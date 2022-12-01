#include<stdio.h>
int main()
{
    int r=8,c=8;
    int chess[r+1][c+1];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            chess[i][j]=0;
        }
    }

    int n;
    scanf("%d",&n);

    while(n--)
    {
        int row,col;
        scanf("%d %d",&row,&col);
        chess[row][col]=1;
    }

    for(int i=0;i<r;i++)
    {
        int count=0;
        for(int j=0;j<c;j++)
        {
            if(chess[i][j]==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(int j=0;j<c;j++)
            {
                chess[i][j]=0;
            }
        }
    }

    for(int j=0;j<c;j++)
    {
        int c_count = 0;
        for(int i=0;i<r;i++)
        {
            if(chess[j][i]==1)
            {
                c_count++;
            }
        }
        if(c_count >1)
        {
            for(int i=0;i<r;i++)
            {
                chess[j][i]=0;
            }
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(chess[i][j]!=0)
            {
                printf("%d %d\n",i,j);
            }
        }
    }
}
