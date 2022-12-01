#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,C;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&N,&C);
        int A[N+1],sum=0;
        for(int i=0;i<N;i++){
            scanf("%d",&A[i]);
            sum+=A[i]*2;
        }
        if(sum<C){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
