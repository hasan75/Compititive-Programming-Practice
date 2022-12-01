#include<stdio.h>
int summation(int x,int y)
{
    int sum = x+y;

    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = summation(a,b);
    printf("Sum of %d %d is %d",a,b,sum);
}
