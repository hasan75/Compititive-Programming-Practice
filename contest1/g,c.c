#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
       scanf("%d",&N);
       int A[N+1],squareRoots=0;
       for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(sqrt(A[i])%1==0){
            squareRoots+;
        }
       }
       if(squareRoots == 0){
        printf("-1\n");
       }
       else{
        printf("%d\n",squareRoots);
       }
    }

    return 0;
}
