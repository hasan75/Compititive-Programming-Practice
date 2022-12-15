#include<stdio.h>
#include<math.h>
int main()
{
    int n=3,m=3;
    printf("--------------------------\n");
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            printf("\t");
            if(j<3)
                printf("|");
        }
        printf("\n--------------------------\n");
    }

    int tictac[n+1][m+1];

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            tictac[i][j]=-1;
        }
    }

    for(int i=1; i<=m*n; i++)
    {
        int r,c;
        if(i%2!=0)
        {
            printf("Player 1 Turn (X). Enter Row and Column : ");
            scanf("%d %d",&r,&c);
            tictac[r][c] = 1;
        }
        else
        {
            printf("Player 2 Turn (O). Enter Row and Column : ");
            scanf("%d %d",&r,&c);
            tictac[r][c] = 2;
        }

        printf("\n--------------------------\n");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(tictac[i][j] == 1)
                    printf("    X    |");
                else if(tictac[i][j]==2)
                    printf("    O    |");
                else
                    printf("\t  |");
            }
            printf("\n--------------------------\n\n");
        }

        int p1Diag=1,p2Diag=1,p1row=1,p2row=1;
        int p1col=1,p2col=1;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i==j && (tictac[i][j] == 1 || tictac[i][j] == 2))
                {
                    if(tictac[i][j])
                }
            }
            printf("\n--------------------------\n\n");
        }
    }
}
