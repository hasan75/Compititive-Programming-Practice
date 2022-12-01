#include<stdio.h>
int main()
{
    int a;
    a=123;
    int* p;  //this means pointer p will save the memory address for int value
    p=&a;  //this will save the address to p
    printf("The Address of a is %p\n",p);
    printf("The value in p is %d\n",*p);

    return 0;
}
