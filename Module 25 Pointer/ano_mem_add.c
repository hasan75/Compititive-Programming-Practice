#include<stdio.h>
int main()
{
    int a=5;
    int* p;
    int* q;
    p=&a;
    q=p;
    *q=500;
    printf("%d\n",a);
    return 0;
}

