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

        int s1[n+1];

        for(int i=0;i<n;i++)
        {
            s1[i]=s[i];
        }
        int temp,flag=1;
        for(int i=0;i<2;i++)
        {
            for(int j=n-2;j>=0;j--)
            {
                if(s1[j]<s1[j+1])
                {
                    temp=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=temp;
                }
                else if(s1[j]==s1[j-1]){
                    flag++;
                }
            }
        }

        int max = s1[0];
        int second_max= s1[1];

        for(int i=0;i<n;i++)
        {
            if(s[i] == max){
                printf("%d ",s[i]-second_max);
            }
            else if(s[i]<max){
                printf("%d ",s[i]-max);
            }
            else if(s[i]==max){
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
