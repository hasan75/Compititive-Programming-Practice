#include<stdio.h>
int check_prime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int j=2;j<=num/2;j++)
    {
        if(num%j==0)
        {
            return 0;
        }
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int p=0;
    int isPrime = 0;

    for(int i=0;i<n;i++)
    {
        isPrime = check_prime(arr[i]);
        if(isPrime)
        {
            p++;
        }
    }
    printf("%d",p);
    return 0;
}
