#include<stdio.h>
void calculate_sum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    calculate_sum(n);
    return 0;
}

void calculate_sum(int n)
{
    int sum=0,iter=1;
    for(int i=1,j=0;i<=n;i++)
    {
        if(iter%2!=0)
            sum+=i;
        else
            sum-=i;
        j++;
        if(j==3)
        {
            iter++;
            j=0;
        }

    }
    printf("%d\n",sum);
}
