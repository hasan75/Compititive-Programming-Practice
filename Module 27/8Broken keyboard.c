#include<stdio.h>
#include<string.h>
void print_broken_string(int l,char s[]);
int main()
{
    char s[10000];
    scanf("%s",s);
    int l=strlen(s);
    print_broken_string(l,s);
    return 0;
}

void print_broken_string(int l,char s[])
{
    for(int i=0;i<l;i++)
    {
        int j=0;
        if(i%2!=0)
        {
            while(j!=2)
            {
                printf("%c",s[i]);
                j++;
            }
        }
        else
            printf("%c",s[i]);
    }
}
