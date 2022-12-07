#include<stdio.h>
int main()
{
    int a=7;
    double b;
    char c='c';

    b=a //will work;

    a=c //will work again
    b=(double)25/4;  //explicit type casting

    printf("%d %lf %c",a,b,c);
}
