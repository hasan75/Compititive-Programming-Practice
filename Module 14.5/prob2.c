#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0,flag=0;
    while(s[i]!='\0')
    {
        if(!(s[i] == '0' || s[i]== '1'))
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
