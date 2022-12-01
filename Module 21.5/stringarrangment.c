#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int l = strlen(s)-1;
    int largest = 26;
    char freq[largest+1];
    for(int i=0;i<=largest+1;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<l;i++)
    {
        freq[s[i]-'a'+1]+=1;
    }

    int total=0;

    for(int i=01;i<=26;i++)
    {
        if(freq[i]>0)
        {
            total++;
        }
    }

    while(total--)
    {
        int max=-1;
        int index=-1;
        char ch;
        for(int i=1;i<=26;i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ch = i+96;
                index=i;
            }
        }

        for(int i=1;i<=max;i++)
        {
            printf("%c",ch);
        }
        freq[index]=0;
    }
}
