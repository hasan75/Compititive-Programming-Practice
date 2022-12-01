#include<stdio.h>
void solve(int n)
{
    int arr[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int k;
    scanf("%d",&k);
    int diff_nums = differ_nums(arr,n,k);
    printf("%d\n",diff_nums);

}

int differ_nums(int arr[],int n,int k)
{
    int different=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!= k)
        {
         different++;
        }
    }
    return different;

}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}
