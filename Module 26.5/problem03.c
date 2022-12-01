#include<stdio.h>
void take_input(int n,int arr[])
{
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void print_array(int n,int array[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    take_input(n,arr);
    print_array(n,arr);

}
