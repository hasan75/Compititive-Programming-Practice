#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENter the three sides: \n");
    scanf("%d %d %d",&a,&b,&c);
    float s;
    s= (a+b+c)/2.0;
    double area;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangle is :%lf",area);
}
