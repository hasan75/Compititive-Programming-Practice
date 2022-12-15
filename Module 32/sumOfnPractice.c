#include<stdio.h>

int recur_s(int i,int n)
{
    if(i>n) return 0;
    int s = recur_s(i+1,n);
    return s+i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum = recur_s(1,n);
    printf("%d ",sum);

    return 0;
}
