#include<stdio.h>
int arr_sum_recur(int i,int n,int arr[])
{
    if(i==n) return 0;
    int sum = arr_sum_recur(i+1,n,arr);
    return sum+arr[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int s = arr_sum_recur(0,n,arr);
    printf("%d ",s);
    return 0;
}
