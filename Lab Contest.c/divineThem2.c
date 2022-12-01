#include <stdio.h>
int main()
{
    int N,K;
    scanf("%d",&N);
    int Roll[N+1];
    for(int i=1;i<=N;i++){
        scanf("%d",&Roll[i]);
    }
    scanf("%d",&K);
    for(int i=K+1;i<=N;i++){
        printf("%d ",Roll[i]);
    }
    for(int i=1;i<=K;i++){
        printf("%d ",Roll[i]);
    }

    return 0;
}
