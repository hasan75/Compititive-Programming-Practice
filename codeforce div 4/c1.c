#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        int s[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        int max=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(max<s[i])
            {
                max = s[i];
            }
            if(s[i]==s[i+1])
            {
                flag++;
            }
        }

        int second_max=INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(s[i]>second_max && s[i]<max)
            {
                second_max = s[i];
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
                    printf("%d ",s[i]-second_max);
                }
                else if(s[i]<max){
                    printf("%d ",s[i]-max);
                }
            }
        }
        printf("\n");
        printf("Max:%d\n",max);
        printf("Second_Max:%d\n",second_max);
    }
    return 0;
}
