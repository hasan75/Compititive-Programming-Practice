#include<stdio.h>
#include<math.h>

int digSum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int sum = digSum(n);
    printf("Sum = %d\n",sum);
    return 0;
}

int digSum(int n)
{
    int pSum = 0,a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        pSum+=((a%10)+(a/1000));
    }
    return pSum;

}
