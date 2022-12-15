#include<stdio.h>

void recursion_1_to_n(int i,int n)
{
    if(i>n)return;
    printf("%d ",i);
    recursion_1_to_n(i+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    recursion_1_to_n(1,n);

    return 0;
}
