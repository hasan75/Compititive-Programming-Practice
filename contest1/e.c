#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        int A[N+1];
        for(int i=0;i<N;i++){
            scanf("%d",&A[i]);
        }
        int max=A[0];
        for(int i=0;i<N;i++){
            if(A[i]>max){
                max=A[i];
            }
        }
        printf("%d\n",max);
    }


    return 0;
}
