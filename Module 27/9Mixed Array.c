#include<stdio.h>
#include<math.h>
int find_the_primes_sum(int n,int arr[],int* p);
float prime_sum_avg(int p_sum,int p_count);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int prime_counts = 0;
    int prime_sums = find_the_primes_sum(n,arr, &prime_counts);
    float prime_avg = prime_sum_avg(prime_sums,prime_counts);
    printf("Prime numbers: %d\n",prime_counts);
    printf("Average of all positive integers: %.2f\n",prime_avg);
}

int find_the_primes_sum(int n,int arr[],int *p)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        int f = 1;
        if(*(arr+i)==1)
        {
            f=0;
        }
        if(*(arr+i)==2)
        {
            f=1;
        }
        for(int j=2;j<=sqrt(*(arr+i));j++)
        {
            if(*(arr+i)% j ==0 )
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            sum+= *(arr+i);
            *p += 1;
        }
    }
    return sum;
}

float prime_sum_avg(int p_sum,int p_count)
{
    return (float)p_sum/p_count;
}
