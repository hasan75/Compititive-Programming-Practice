#include<stdio.h>
#include<math.h>

int recursion(int n)
{
    if(n>0)
        return n*recursion(n-1);
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",recursion(n));
    return 0;
}

/*
n!
5! = 5 x 4!

*/
