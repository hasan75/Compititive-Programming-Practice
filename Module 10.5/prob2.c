#include <stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[1];
    for(int i=1;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int newArr[max+1];
    for(j=1;j<=max;j++){
        newArr[j]=0;
    }
    for(j=1;j<=n;j++){
        newArr[arr[j]]+=1;
    }

    for(int i=0;i<=max;i++){
            if(newArr[i]==1){
                printf("%d ",i);
            }

    }

}
