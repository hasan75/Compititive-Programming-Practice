#include<stdio.h>
#include<math.h>
#include<string.h>
void make_upper_case(int l,char s[])
{
    for(int i=0;i<l;i++)
    {
        if(s[i]%2==0)
        {
            s[i]-=32;
        }
    }
    puts(s);
}
int main()
{
    char s[10000];
    scanf("%s",s);
    int l = strlen(s);
    make_upper_case(l,s);
    return 0;
}
