#include<stdio.h>
#include<string.h>

void print_sequence(int* freq_ptr)
{

    for(int i=1;i<=26;i++)
    {
        if(*(freq_ptr+i)>0)
        {
            while((*(freq_ptr+i))--)
                printf("%c",i+96);
        }
    }
}

int main()
{
    char s[100];
    int freq[27];
    scanf("%s",s);
    int len = strlen(s);

    for(int i=1;i<=26;i++)
        freq[i]=0;

    for(int i=0;i<len;i++)
        freq[(s[i]-'a')+1]++;

    print_sequence(freq);

    return 0;
}
