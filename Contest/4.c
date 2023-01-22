#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char cham[12]="champions";
    gets(str);
    int len = strlen(str);
    if(len>=9 && len<=1000)
    {
        for(int i=0;i<len;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]+=32;
            }
        }
        char* ptr = strstr(str,cham);
        if(ptr != NULL)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

        return 0;
    }
}
