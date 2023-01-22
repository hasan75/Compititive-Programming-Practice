#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {

        int N,last;
        scanf("%d",&N);
        if(N%10!=0)
        {
            while(N!=0)
            {
                last=N%10;
                printf("%c",last+64);
                N/=10;
            }
        }
        else
        {
            printf("%c",N+64);
        }
        printf("\n");
    }
    return 0;
}

