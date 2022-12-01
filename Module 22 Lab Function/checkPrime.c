#include<stdio.h>
int is_prime(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_prime(n))
        printf("Prime\n");
    else
        printf("Composite\n");

    return 0;
}

