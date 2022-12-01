#include<stdio.h>

int add_them(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = add_them(a,b);
    printf("The Sum is %d",sum);
}
