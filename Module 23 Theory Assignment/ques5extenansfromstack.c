#include <stdio.h>
#define ADD_THREE_NUMS(a, b, ...) add_three_nums(a, b, (0, ##__VA_ARGS__))
int add_three_nums(int a,int b,int c)
{
 return a + b + c;
}

int main()
{
 int a, b;
 scanf("%d %d", &a, &b);
 printf("%d", ADD_THREE_NUMS(a, b));
 return 0;
}
