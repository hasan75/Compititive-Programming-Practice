#include<stdio.h>
void print_n_recur(int n)
{
    if(n<1) return;
    printf("%d ",n);
    print_n_recur(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    print_n_recur(n);
}

