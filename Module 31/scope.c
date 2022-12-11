#include<stdio.h>

int a = 10; //globally declared

int main()
{
    int b = 20; //local variable
    printf("a from global: %d\n",a);
    // here a can be accessed inside the main fuction
    printf("b from local: %d\n",b);
    return 0;
}
