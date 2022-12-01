

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
        int s[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        int flag = 0;
        int max=0;
        int s_max=-1;

        for(int i=0;i<n;i++)
        {
            if(s[i]>max)
            {
                max=s[i];
            }
            if(s[i]==s[i+1])
            {
                flag++;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(s[i]<max && s[i]>s_max)
            {
                s_max=s[i];
            }
        }

        if(flag == n-1){
            for(int i=0;i<n;i++)
            {
                printf("0 ");
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
            if(s[i] == max){
                printf("%d ",s[i]-s_max);
            }
            else if(s[i]<max){
                printf("%d ",s[i]-max);
            }
            else if(s[i]==max){
                printf("0 ");
            }
            }
        }
        printf("\n");

    }
    return 0;
}
