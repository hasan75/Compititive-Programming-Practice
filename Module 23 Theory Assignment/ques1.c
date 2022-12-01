#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int l= strlen(s)-1;
    for(int i=0;i<l;i++)
    {
        if(s[i] >=65 && s[i]<=90)
        {
            s[i]+=32;
        }
        else if(s[i] >=97 && s[i]<=122)
        {
            s[i]-=32;
        }
    }
    puts(s);
}
