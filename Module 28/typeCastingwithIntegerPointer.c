#include<stdio.h>
int main()
{
    int a=7;
    int* pi;
    double* pd;
    double b=8.65;
    pi =&a;
//    pd = &b;
    pd=(double*)pi; //this will allocate 8 bytes
    printf("%d %lf\n",a,b);
    printf("%p %p\n",pi,pd);
}
