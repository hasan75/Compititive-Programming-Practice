#include<stdio.h>
int arr_recur(int n, int* arr_ptr)
{
    if(n<0) return 0;
    return *(arr_ptr+n) + arr_recur(n-1,arr_ptr);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    n=n-1;
    int* arr_ptr = &arr;
    int sum = arr_recur(n,arr_ptr);
    printf("%d",sum);
    return 0;

}
