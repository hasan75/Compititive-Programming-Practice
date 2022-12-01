#include<stdio.h>

void warning()
{
    printf("Fire! Please evacuate!!\n");
}

void solve()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
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
