#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted[n],min,min_index;
    for(int i=0;i<n;i++){
        min=arr[0];
        min_index=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        sorted[i]=min;
        arr[min_index]=999;
    }

    for(int i=0;i<n;i++){
        printf("%d ",sorted[i]);
    }

    return 0;
}
