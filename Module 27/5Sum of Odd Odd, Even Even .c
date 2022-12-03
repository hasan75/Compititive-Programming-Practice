#include<stdio.h>
void take_array_input(int n, int arr[]);
int sum_of_odd_even(int n,int arr[]);
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    take_array_input(n,arr);
    int summation = sum_of_odd_even(n,arr);
    printf("%d\n",summation);
    return 0;
}

void take_array_input(int n, int arr[])
{
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int sum_of_odd_even(int n,int arr[])
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0 && arr[i]%2!=0)
            sum+=(i+arr[i]);
        else if(i%2==0 && arr[i]%2==0)
            sum+=(i+arr[i]);
    }
    return sum;
}
