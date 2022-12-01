#include<stdio.h>
int main(void)
{
    int* a=20; //here the pointer is assigned to the addess of 20
    printf("Ais:%d\n",a); //the address of 20 was not declared
    printf("Address of 20 is: %p\n",&a);
    int* b=&a;
    *b=100;
    printf("a:%d\n same as b:%d\n",a,*b);
}
