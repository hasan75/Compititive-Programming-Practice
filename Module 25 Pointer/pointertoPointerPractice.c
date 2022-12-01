#include<stdio.h>
int main()
{
    int a=10;
    printf("a is %d\n",a);
    int* p =&a;
    printf("The address p %p\n",p);
    int** q = &p;
    printf("The address q %p\n",q);
    int*** r = &q;
    printf("The address r %p\n",r);
    ***r = 100;
    printf("***r->%d is a->%d\n",***r,a);

    return 0;
}
