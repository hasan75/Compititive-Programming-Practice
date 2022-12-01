#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int flag=1;
        for(int i=0,j=n-1;i<n;i++)
        {
            if(a[i]!=a[j])
            {
                flag=0;
            }
            j--;
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
    }

    }
        return 0;
}
