#include<stdio.h>
#include<limits.h>
void find_max_min(int arr[],int* p,int* q)
{
//    int maxx = INT_MIN;
//    int minn = INT_MAX;
    *p=arr[0]; //max
    *q = arr[0]; //min
    for(int i=0;i<10;i++)
    {
        if(arr[i]>*p)
        {
            *p=arr[i];
        }
        if(arr[i]<*q)
        {
            *q=arr[i];
        }
    }
}
int main()
{
    int arr[100];
    int maxx= -1;
    int minn= INT_MAX;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    find_max_min(arr,&maxx,&minn);
    printf("Maximum is: %d\nMinium is %d\n",maxx,minn);
    return 0;

}
