#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,k,j,next,value;
    scanf("%d %d",&n,&k);
    int arr[n+1];

    for(int i=1,j=0;i<=n;i++)
    {
        if(i%2==0)
        {
            arr[j]=i;
            j++;
        }
        next=j;
    }

    for(int i=1,l=next;i<=n;i++)
    {
        if(i%2!=0)
        {
            arr[l]=i;
            l++;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        if(k==i+1)
        {
          value=arr[i];
        }
    }
    printf("\nThe %dth element in this sequence is %d\n",k,value);


}
