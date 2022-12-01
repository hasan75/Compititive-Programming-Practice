#include<stdio.h>
int print_recur(int n)
{
    if(n==1)
    {
        printf("%d ",n);
        return 0;
    }
    printf("%d ",n);
    print_recur(n-1);


}
int main()
{
    int n;
    scanf("%d",&n);
    print_recur(n);
}
