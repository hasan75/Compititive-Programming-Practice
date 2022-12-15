#include<stdio.h>

int recursion_power(int n,int m)
{
    if(m<1) return 1;
    return n*recursion_power(n,m-1);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int power =  recursion_power(n,m);
    printf("%d ",power);
}
