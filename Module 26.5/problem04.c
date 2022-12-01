#include<stdio.h>


float area(int r)
{
    return 3.14159*r*r;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("%f\n",area(r));
    return 0;
}
