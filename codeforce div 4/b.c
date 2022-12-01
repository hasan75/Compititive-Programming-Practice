
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
        getchar();
        char s[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%c",&s[i]);
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            int a = s[i]-'a'+1;
            if(a>max){
                max=a;
            }
        }
        printf("%d\n",max);

    }

    return 0;
}
