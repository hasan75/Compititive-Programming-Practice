#include<stdio.h>
void take_input(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int last_zero_sum(int n,int arr[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    take_input(n,arr);
    printf("%d\n",last_zero_sum(n,arr));
}
