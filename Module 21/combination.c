#include<stdio.h>
#include<math.h>

int fact(int x);

int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    int comb = fact(n)/(fact(n-r)*fact(r));
    printf("nCr is: %d",comb);

    return 0;
}

int fact(int x){
    int res = 1;
    for(int i=1;i<=x;i++)
    {
        res*=i;
    }
    return res;
}
