#include<stdio.h>
void solve()
{
    int k, p=0;
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        while((i%3==0) || (i%10==3))
        {
            i++;
            k++;
        }
        p=i;

    }
    printf("%d\n",p);
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
