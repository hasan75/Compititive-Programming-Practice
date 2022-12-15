#include<stdio.h>

int sum_recur(int n)
{
    if(n<1) return 0;
    return n+sum_recur(n-1);

}

int main()
{
    int n;
    scanf("%d",&n);
    int sum = sum_recur(n);
    printf("%d ",sum);

}
