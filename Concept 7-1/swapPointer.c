#include<stdio.h>

void swap(int* p,int* q)
{
    int temp=*p;
    *p=*q;
    *q=temp;

}

int main()
{

    int a,b;
    a=5,b=10;
    swap(&a,&b);

    printf("A:%d and B:%d",a,b);
    return 0;
}
