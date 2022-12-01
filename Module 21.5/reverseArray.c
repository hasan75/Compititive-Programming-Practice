#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
    int s,temp;
    scanf("%d",&s);

    int a[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i=0,j=s-1;i<s/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    for(int i=0;i<s;i++)
        printf("%d ",a[i]);

    return 0;
}

