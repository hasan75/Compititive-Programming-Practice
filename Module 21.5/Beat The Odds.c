#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,even=0,odd=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2 !=0){
                odd++;
            }

            else{
                even++;
            }
        }

        if(odd == n)
        {
            printf("0\n");
        }
        else{
            if(even > odd)
            {
                printf("%d\n",odd);
            }
            else{
                printf("%d\n",even);
            }
        }
    }
}
