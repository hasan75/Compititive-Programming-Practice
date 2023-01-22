#include<stdio.h>
#include<math.h>
#include<limits.h>
void solve()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    int maxMul,minMul,maxSum,minSum;
    if(abs(min)>abs(max))
    {
        maxMul = min*min;
        minMul = max*max;
        maxSum = max+max;
        minSum = min+min;
    }
    else{
        maxMul = max*max;
        minMul = min*min;
        maxSum = max+max;
        minSum = min+min;
    }
    printf("%d %d %d %d\n",maxMul,minMul,maxSum,minSum);

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
