#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X>=1900 && X<=5000)
    {
        if(X%4==0)
        {
            if(X%100!=0)
            {
                printf("Yes\n");
            }
            else{
                if(X%400==0)
                {
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }
            }
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}

