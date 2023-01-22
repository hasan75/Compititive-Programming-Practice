#include<stdio.h>
void pattern_solve(int n)
{
    for(int i=1,j=n-1,a=1; i<=n; i++,j--,a+=2)
    {
        for(int k=0; k<j; k++)
        {
            printf(" ");
        }
        if(i%2!=0)
        {
            for(int l=1; l<=a; l++)
            {
                printf("^");
            }
        }
        else
        {
            for(int m=1; m<=a; m++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pattern_solve(n);
    return 0;
}
