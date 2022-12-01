#include<stdio.h>
int main()
{
    unsigned int a=17; //declaration
    int b=7; //initialization
    float c= 7.5;
    double x = 8.343434;
    char y='a';

    //to convert in octal and hexadeciaml
    int toOctal = 1762455;
    int toHex = 167345;

    printf("%u %d %f %lf %c\n\n",a,b,c,x,y);
    printf("%o, %x",toOctal,toHex);

    return 0;
}
