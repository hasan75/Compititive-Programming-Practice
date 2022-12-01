#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    long long int a,b;
    a=12;
    printf("%p\n",&a);
    printf("%p\n\n",&b);
    for(int i =0;i<9;i++)
    {
        printf("%p\n",&arr[i]);
    }
    printf("--------\n");

    char array[]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++)
    {
        printf("%p\n",&array[i]);
    }
}
