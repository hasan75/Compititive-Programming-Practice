#include<stdio.h>
void solve();
void show_cons_evens(int n);
void show_evens(int m);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
void solve()
{
    int n;
    scanf("%d",&n);
    show_cons_evens(n);
}
void show_cons_evens(int n)
{
    int middle = n/4;
    show_evens(middle);
}
void show_evens(int m)
{
    int f_even=m-3;
    for(int i=0,j=0;i<4;i++)
    {
        printf("%d ",f_even);
        f_even+=2;
    }
    printf("\n");
}
