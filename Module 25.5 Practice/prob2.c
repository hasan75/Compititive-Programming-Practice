#include<stdio.h>

void take_array_input(int n,int arr[])
{
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

}
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int solve(int n)
{
    int arr[n+1];
    take_array_input(n,arr);
    int pos;
    scanf("%d",&pos);
    sort(arr,n);
    printf("%dth largest element = %d\n",pos,arr[n-pos]);
    printf("%dth smallest element = %d\n",pos,arr[pos-1]);

}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}
