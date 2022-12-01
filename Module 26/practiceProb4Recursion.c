#include<stdio.h>

//sum upto n
//1+2+3+4+...+n
int sum(int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    return n+sum(n-1);
}
int main()
{
     int n;
     scanf("%d",&n);
//     int sum = (n*(n-1))/2;
//     printf("%d",sum);
    printf("%d\n",sum(n));
}
