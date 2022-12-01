#include<stdio.h>
#define add_three_nums(a,b,...) ADD_THREE_NUMS(a,b,(0,##__VA_ARGS__))
int ADD_THREE_NUMS(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int sum = add_three_nums(a,b);
    printf("%d\n",sum);
    return 0;
}

int ADD_THREE_NUMS(int a,int b,int c)
{
    return a+b+c;
}



