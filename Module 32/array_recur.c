#include<stdio.h>

int arr_recur(int n,int ar[])
{
    if(n<1) return 0;
    return ar[n]+arr_recur(n-1,ar);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&ar[i]);
    int sum = arr_recur(n,ar);
    printf("%d",sum);

    return 0;
}
