#include<stdio.h>
void swap(int* pl, int* pr);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        if(l!=r)
            swap(&arr[l],&arr[r]);
        else
        {
            printf("l and r should be different\n");
            return 0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void swap(int* pl, int* pr)
{
    int temp;
    temp=*pl;
    *pl=*pr;
    *pr=temp;
}
