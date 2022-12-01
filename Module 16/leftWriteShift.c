#include<stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=a<<1;
    c=a>>1;
    printf("1 left shift of a->%d is : %d\n",a,b);
    printf("1 right shift of a->%d is : %d\n",a,c);

    return 0;
}
