#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    scanf("%d",&N);
    getchar();
    char C;
    C=getchar();
    for(i=0,j=(N-1);i<N;i++,j--)
    {
        for(int k=0;k<j;k++)
        {
            printf(" ");
        }
        for(int l=0;l<N;l++)
        {
            printf("%c",C);
        }
        printf("\n");
    }
    return 0;
}

