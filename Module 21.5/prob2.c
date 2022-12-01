#include<stdio.h>
#include<math.h>
void pattern(int n);
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}

void pattern(int n)
{
    for(int i=0,l=n;i<n;i++,l--)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(int k=(l*2-1);k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return;
}
