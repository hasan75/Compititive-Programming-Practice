#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char arr[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            getchar();
            scanf("%c",&arr[i][j]);
        }
    }

    int color = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {
                color=1;
                break;
            }
        }
    }

    if(color == 0)
        printf("#Black&White");
    else
        printf("#Color");
}
