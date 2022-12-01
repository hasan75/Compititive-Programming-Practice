#include<stdio.h>

int pointer_sum(int* p,int* q,int* r)
{
    return *p+*q+*r;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum = pointer_sum(&a,&b,&c);
    printf("%d",sum);
    return 0;
}
