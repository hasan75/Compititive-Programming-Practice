#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char a[51],b[51];
        scanf("%s",a);
        getchar();
        scanf("%s",b);
        int la = strlen(a);
        int lb= strlen(b);
        char x='X';
        int xcntA=0,xcntB=0;
        if(a[la-1]>b[lb-1])
        {
            printf("<\n");
        }
        else if(a[la-1]<b[lb-1])
        {
            printf(">\n");
        }
        else if(a[la-1]==b[lb-1])
        {
            for(int i=0;i<la-2;i++)
            {
                if(a[i]==x)
                {
                    xcntA++;
                }
                if(b[i]==x)
                {
                    xcntB++;
                }
            }
            if(xcntA==xcntB)
            {
                printf("=\n");
            }
            else if(xcntA>xcntB)
            {
                if(a[la-1]=='L')
                {
                    printf(">\n");
                }
                else{
                    printf("<\n");
                }
            }
            else if(xcntA<xcntB){
                if(a[la-1]=='L')
                {
                    printf("<\n");
                }
                else{
                    printf(">\n");
                }
            }
        }
    }

    return 0;
}

