#include<stdio.h>

int recur_sum(int i,int n)
{
    if(i>n) return 0;
    int s = recur_sum(i+1,n);
    return s+i;
}

int main()
{
    int n;
    scanf("%d",&n);
    int sum = recur_sum(1,n);
    printf("%d\n",sum);
    return 0;
}
