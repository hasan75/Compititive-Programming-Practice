#include <stdio.h>
int main()
{
    int N,K;
    scanf("%d",&N);
    int Roll[N];
    for(int i=1;i<=N;i++){
        scanf("%d",&Roll[i]);
    }
    scanf("%d",&K);
    int newRoll[N];
    int new_index = 0;
    for(int i=(K+1);i<=(N);i++){
        newRoll[new_index] = Roll[i];
        new_index++;
    }
    for(int i=1;i<=K;i++){
        newRoll[new_index]=Roll[i];
        new_index++;
    }
    for(int i=0;i<new_index;i++){
        printf("%d ",newRoll[i]);
    }
}
