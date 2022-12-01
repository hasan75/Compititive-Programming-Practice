#include <stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        for(int j=1;j<=i*2-1;j++){
                if(i==N){
                    printf("#");
                    continue;
                }
                else if(j == 1 || j==i*2-1){
                    printf("#");
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
}
