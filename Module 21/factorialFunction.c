#include<stdio.h>
#include<math.h>

int fact(int x);
int main()
{
    int n;
    scanf("%d",&n);
    //int factorial = fact(n);
    //printf("Factorial is %d",factorial);
    printf("Factorial is %d",fact(n));
}

int fact(int x){
    int res = 1;
    for(int i=1;i<=x;i++)
    {
        res*=i;
    }
    return res;
}
