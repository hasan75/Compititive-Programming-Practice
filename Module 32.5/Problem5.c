#include<stdio.h>
int recur_sum(int n)
{
    if(n<1) return 0;
    return n+recur_sum(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum = recur_sum(n);
    printf("%d",sum);
    return 0;
}
