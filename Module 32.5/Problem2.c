#include<stdio.h>

int recur_sum(int arr[], int n,int i)
{
    if(i>n) return 0;
    return (arr[i]%10)+recur_sum(arr,n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    n=n-1;
    int sum = recur_sum(arr,n,0);
    printf("%d\n",sum);
}
