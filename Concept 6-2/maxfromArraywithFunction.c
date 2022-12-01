#include<stdio.h>
#include<limits.h>
void solve()
{
    int n;
    scanf("%d",&n);
    int num[n];
    take_input(n,num);
    int maximum = max_array(n,num);
    printf("Max is: %d\n",maximum);
}
void take_input(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

int max_array(int n,int arr[])
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    return max;

}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();

    }
    return 0;
}

