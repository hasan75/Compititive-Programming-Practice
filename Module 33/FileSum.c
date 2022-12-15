#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("Sum is --> %d \n",sum);
    return 0;
}
