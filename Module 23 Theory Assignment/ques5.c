#include<stdio.h>
#include<math.h>
int add_three_nums(int a,int b,int c);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int sum = add_three_nums(a,b,0);
    printf("%d\n",sum);
    return 0;
}

int add_three_nums(int a,int b,int c)
{
    c=0;
    return a+b+c;
}

