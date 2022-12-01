#include<stdio.h>
int main()
{
    int n=11;
    int arr[11]={12,7,9,1,3,73,11,15,62,19,4};
    int sorted[n];

    int temp;
    for(int i=0;i<5;i++){
       for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
       }
       printf("\n\nAfter One Iteration \n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n\n\n");
    }

    printf("\n\nAfter Final\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
