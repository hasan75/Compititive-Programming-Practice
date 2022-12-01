#include <stdio.h>
int main()
{
    int T;
    long long S,A,B,C,D;
    scanf("%d",&T);
    while(T--){
        scanf("%lld %lld %lld %lld",&S,&A,&B,&C);
        D= S-(A+B+C);
        printf("%lld\n",D);
    }

    return 0;
}
