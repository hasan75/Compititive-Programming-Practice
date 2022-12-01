#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[20];

    for(i=0;i<n;i++)
    {
        scanf("%d", &ara[i]);
    }
    int mx=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>mx && ara[i]%2==0)
        {
            mx=ara[i];
        }
    }
    printf("%d\n", mx);
    int temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]<ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
            //printf("%d ",ara[i]);
        }
        printf("%d ",ara[i]);
    }
    int emx=0;
    for(i=1;i<n;i++)
    {
        if(ara[i]>ara[i+1])// && (ara[0]+ara[i])%2==0)
        {
            emx=ara[emx]+ara[i];
        }
    }
    printf("\n%d \n",emx);
    //printf("%d",ara[i]);

    return 0;
}
