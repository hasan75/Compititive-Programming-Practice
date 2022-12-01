#include<stdio.h>
int main()
{
    int N,K,Run,count=0;
    scanf("%d",&N);
    scanf("%d",&K);
    int arr[N+1];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]<K){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
