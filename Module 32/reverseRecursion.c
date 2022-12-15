#include<stdio.h>

void solve_n_to_1(int i,int n)
{
    if(i>n) return;
    solve_n_to_1(i+1,n);
    printf("%d ",i);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve_n_to_1(1,n);
}
