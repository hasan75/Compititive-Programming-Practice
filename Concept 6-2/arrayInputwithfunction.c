#include<stdio.h>

void take_input(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print_array(int n,int arr[])
{
    printf("The Array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int num[n];
    take_input(n,num);
    print_array(n,num);

    return 0;
}
