
#include<stdio.h>

void view_arr_size(int* arr,int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d ",*(arr+i));
    }
}
int main()
{
    int arr[5]={12,20,40,60,80};
    view_arr_size(arr,5);
}
