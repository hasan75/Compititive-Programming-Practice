#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the array of size %d : ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sortedArray[n];
    int min,minIndex;
    for(int j=0;j<n;j++)
    {
        min=arr[0];
        minIndex=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
                minIndex=i;
            }
        }
        sortedArray[j]=min;
        arr[minIndex]=9999;

        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

    }
}
