#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int a[N+1][M+1],b[N+1][M+1];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
