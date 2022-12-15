#include<stdio.h>
#include<stdbool.h>
void print_tic_tac(int a[][4],int n)
{
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j==1) printf("     0");
            if(a[i][j]==-1) printf(" ");
            if(a[i][j]==1) printf("X");
            if(a[i][j]==2) printf("0");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("-----------------------------------------");
        printf("\n\n");
    }
}
int main()
{
    int n=3;
    int a[4][4];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j]=-1;
        }
    }


    bool player1 = true;
    bool player2 = false;

    while(true)
    {
        print_tic_tac(a,n);
        if(player1)
        {
            int r,c;
            Loop:
            printf("Player 1, Turn (X), Enter Row and Column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("This position is already taken.\n");
                goto Loop;
            }
            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else if(player2)
        {
            int r,c;
            Loop2:
            printf("Player 2, Turn (0), Enter Row and Column: ");
            scanf("%d %d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("This position is already taken.\n");
                goto Loop2;
            }
            a[r][c] = 2;
            player1=true;
            player2 = false;
        }
    }
}
