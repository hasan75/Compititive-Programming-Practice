#include<stdio.h>
#include<limits.h>
void solve()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<min)
            min=arr[i];
    }
    int eaten_candie = 0;
    for(int i=0;i<n;i++)
        eaten_candie+=(arr[i]-min);

    printf("%d\n",eaten_candie);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}
