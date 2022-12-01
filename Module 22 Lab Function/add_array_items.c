#include<stdio.h>

int add_them(int a,int b[])
{
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum+=b[i];
    }

    return sum;
}
int main()
{
    int arr[10]={13,14,15,16,17,18,19,20};
    int sum = add_them(8,arr);
    printf("The Sum is %d",sum);
}
