#include<stdio.h>
#include<math.h>
int shorted(int arr[],int n);
float median(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float median_value = median(arr,n);
    printf("Median Value: %.2f\n",median_value);

    return 0;
}


int shorted(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    return arr;
}

float median(int arr[],int n)
{
    shorted(arr,n);

    if(n%2 != 0)
    {
        return arr[(n/2)];
    }
    else{
        int med_sum=arr[n/2]+arr[(n/2)-1];
        return med_sum/2.0;
    }
}
