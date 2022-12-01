#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sorted[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",sorted[i]);
    }
}
