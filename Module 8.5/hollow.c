#include <stdio.h>
int main()
{

    int N,M;
    scanf("%d %d",&N, &M);
    for(int j=0; j<M;j++){
        printf("#");
    }
    printf("\n");
    for(int i=0;i<N-2;i++){
        printf("#");
        for(int j=0;j<M-2;j++){
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
    for(int j=0; j<M;j++){
        printf("#");
    }
    printf("\n");
}
