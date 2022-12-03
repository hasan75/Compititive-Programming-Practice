#include<stdio.h>
int divisibles_by_three_five(int n,int arr[]);
int divisibles_by_three(int value);
int divisibles_by_five(int value);
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d\n",divisibles_by_three_five(n,arr));

}
int divisibles_by_three_five(int n,int arr[])
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(divisibles_by_three(arr[i]))
        {
            count+=divisibles_by_three(arr[i]);
            continue;
        }
        count+=divisibles_by_five(arr[i]);
    }
    if(count>0)
        return count;
    else
        return -1;
}

int divisibles_by_three(int value)
{
    if(value%3==0)
        return 1;
    return 0;
}
int divisibles_by_five(int value)
{
    if(value%5==0)
        return 1;
    return 0;

}
