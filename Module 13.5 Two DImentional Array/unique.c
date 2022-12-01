#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int newArray[max+1];
    for(int i=0;i<=max;i++)
    {
        newArray[i]=0;
    }
    for(int i=0;i<n;i++){
        newArray[arr[i]]+=1;
    }
    for(int i=max;i>=0;i--){
        if(newArray[i] == 1){
            printf("Unique is: %d ",i);
            break;
        }
    }
}
