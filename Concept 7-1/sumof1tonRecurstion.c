#include<stdio.h>

int sum_recursion(int n)
{
    if(n>0)
    {
        return sum_recursion(n-1)+n;
    }
    return 0;
}


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum_recursion(n));
}
