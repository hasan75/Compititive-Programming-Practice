#include <stdio.h>
int main()
{
    int N,k;
    scanf("%d",&N);
    int arr[N+1];
    for(int i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);

    int max=arr[1];
    for(int i=1;i<=N;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    int newArr[max+1];
    for(int i=0;i<=max;i++){
        newArr[i]=0;
    }

    for(int i=1;i<=N;i++){
        newArr[arr[i]]+=1;
    }

    int count = 0;
    for(int i=1;i<=max;i++){
        if(newArr[i]==1){
            count++;
            if(count == k){
                printf("%d",i);
                break;
            }
        }
    }

    return 0;

}
