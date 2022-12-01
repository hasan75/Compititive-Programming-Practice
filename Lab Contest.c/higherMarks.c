#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N+1];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0;i<N;i++){
        printf("%d ", max-arr[i]);
    }

    return 0;

}
