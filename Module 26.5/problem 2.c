#include<stdio.h>
void take_input(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void bubble_sort(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    take_input(n,arr);
    printf("After sorting:\n");
    bubble_sort(n,arr);


}
