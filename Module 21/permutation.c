
#include<stdio.h>
#include<math.h>

int fact(int x);
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int per = fact(n)/fact(n-r);
    printf("Permutation nPr is  %d",per);
}

int fact(int x){
    int res = 1;
    for(int i=1;i<=x;i++)
    {
        res*=i;
    }
    return res;
}
