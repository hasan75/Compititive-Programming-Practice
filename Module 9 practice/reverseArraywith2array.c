#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int arr[N];
    for( i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int reverse_arr[N];
    for(i=N-1,j=0;i>=0;i--,j++){
            reverse_arr[j]=arr[i];
    }

    for(int i=0;i<N;i++){
        printf("%d ", reverse_arr[i]);
    }
}
