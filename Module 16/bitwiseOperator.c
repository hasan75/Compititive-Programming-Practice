#include<stdio.h>
int main()
{
    unsigned int a,b;
    a=22;
    b=5;
    int c = a&b;
    int d = a|b;
    int e = ~b;
    unsigned int f= ~a;
    int x = -7;
    int g= ~x;
    printf("A&B: %d\n",c);
    printf("A|B: %d\n",d);
    printf("~A is: %d\n",e);
    printf("~(A+1) is: %d\n",e+1);
    printf("Unsigned is: %u\n",f);
    printf("~ of -7 is: %d\n",g);
    return 0;
}
