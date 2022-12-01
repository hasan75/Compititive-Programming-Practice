#include<stdio.h>
int g=7;
void add_two_nums()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d",sum);
}
int main()
{
    add_two_nums();
    return 0;
}
