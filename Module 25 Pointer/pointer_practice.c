#include<stdio.h>
int main()
{
    int a=5;
    int* p =&a;
    printf("Memory Address: %p\n",p);
    printf("Value is the address: %d\n",*p);
    printf("Value of a is: %d\n",a);

    int* q = p;
    *q=20;
    printf("%d\n",a);

    return 0;

}
