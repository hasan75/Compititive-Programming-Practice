#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int up=0,low=0,i=0,c;
    scanf("%s",s);
    while(s[i] != '\0')
    {
        if(s[i]<97)
        {
            up++;
        }
        else{
            low++;
        }
        i++;
    }

    if(up>low)
    {
        i=0;
        while(s[i] != '\0')
        {
            if(s[i]>=97)
            {
                s[i]-=32;
            }
            i++;
        }
    }
    else
    {
        i=0;
        while(s[i] != '\0')
        {
            if(s[i]<97)
            {
                s[i]+=32;
            }
            i++;
        }
    }

    puts(s);

    return 0;
}
