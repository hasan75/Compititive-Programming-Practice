#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, i, j;
    scanf("%d", &n);
    getchar();
    char ara[100];
    for(k=0; k<n; k++)
    {
        scanf("%s",&ara[k]);
    }
    for(k=0; k<n; k++)
    {
        int flag=1;
        int len=strlen(ara);
        for(i=0,j=len-1; i<j; i++, j--)
        {
            if(ara[i]!=ara[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            {
                printf("Case #1: Not Palindrome\n");
            }
        else
        {
            if(strlen(ara)-1<=7)
            {
                printf("Case #2: %s\n",ara);
            }
            else
            {
                printf("Case #3: %c%d%c\n",ara[0],len-2,ara[len-1]);
            }
         }
    }
    return 0;
}
