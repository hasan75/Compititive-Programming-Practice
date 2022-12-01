#include <stdio.h>
int main()
{
    int N,temp;
    scanf("%d",&N);
    int arr[N+5];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
        }
    }
    for(int k=0;k<N;k++){
        printf("%d ",arr[k]);
    }

    return 0;
}
