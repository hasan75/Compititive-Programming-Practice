#include<stdio.h>
int main()
{
    int a;
    int* p;
    p=&a;
    printf("%d\n",&a);  /*Decimal of Hexadecimal value of memory address */
    printf("%p\n",p);

    return 0;
}
