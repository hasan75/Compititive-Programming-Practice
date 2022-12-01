#include<stdio.h>

void find_kth_pos(int n)
{
    int k;
    for(int i=1;i<=n;i++)
    {

        while(i%3==0 || i%10==3)
        {
           i++;
           n++;
        }
        k=i;

    }
    printf("%d\n",k);
}

void solve()
{
    int n;
    scanf("%d",&n);
    find_kth_pos(n);
}


int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
}
