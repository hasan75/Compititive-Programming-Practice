#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char s1[100],res[100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s1);
        if(i==0)
        {
            strcpy(res,s1);
        }
        else{
            strcat(strcat(res," "),s1);
        }
    }
    puts(res);
}
