#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=N-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}
