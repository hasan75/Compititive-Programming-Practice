#include<stdio.h>
int maxx()
{
    int a=10,b=50;
    int max= a>b?a:b;
    return max;
}
int main()
{

    int max = maxx();
    /*
    this function maxx has no agruments and a return value max.
    */
    printf("Max is :%d\n",max);
    return 0;
}

