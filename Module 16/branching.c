#include<stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    getchar();
    char c=getchar();


    if(c=='+'){
        ans=a+b;
    }
    else{
        ans=a-b;
    }
    printf("Ans =%d",ans);

    return 0;
}
