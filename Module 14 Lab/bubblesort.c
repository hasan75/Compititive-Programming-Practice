#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array you inputed: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");

    for(int i=0;i<n;i++){
        for(int i=0;i<n-1;i++){
            //compare arr[i] and arr[i+1]
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]=temp;
            }

        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
