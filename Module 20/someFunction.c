#include<stdio.h>

int my_gcd(int x,int y){

    for(int i=x;i>=1;i--){
        if(x%i==0 && y%i==0){
            return i;
        }
    }
}
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans = my_gcd(a,b);
    printf("The gcd is: %d\n",ans);

    return 0;
}
