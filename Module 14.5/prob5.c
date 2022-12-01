#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[9][9];
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            a[i][j]=0;
        }
    }
    int r,c,cnt=0;
    while(cnt<n)
    {
        scanf("%d %d",&r,&c);
        a[r][c]=1;
        cnt++;
    }
    int safe=0;
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if(a[i][j]>0)
            {
                printf("%d%d ",i,j);
            }

    }
}
