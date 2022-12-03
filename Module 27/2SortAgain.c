#include<stdio.h>
void sort_again(int l,char s[]);
int main()
{
    char s[1000];
    scanf("%s",s);
    int l = strlen(s);
    sort_again(l,s);
    return 0;
}

void sort_again(int l,char s[])
{
    char freq[27];
    for(int i=1;i<=26;i++)
    {
       freq[i]=0;
    }

    for(int i=0;i<l;i++)
    {
        freq[(s[i]-'a')+1]++;
    }

    for(int i=27;i>0;i--)
    {
        if(freq[i]>0)
        {
            for(int j=0;j<freq[i];j++)
                printf("%c",i+96);

        }
    }
}
