#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000005];
    scanf("%s",s);
    int n=strlen(s);
    char freq[27];
    for(int i=1;i<=26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        freq[(s[i]-'A')+1]++;
    }
    int oddCount=-1,total=0;
    char oddChar;
    for(int i=1;i<=26;i++)
    {
        if(freq[i]>0)
        {
            total++;
        }
        if(freq[i]%2!=0)
        {
           oddCount=freq[i];
           oddChar=i+64;
           freq[i]=0;
        }
    }
    int remainChar=n;
    if(oddCount!=-1)
    {
        total-=1;
        remainChar-=oddCount;
    }
    char first[(remainChar/2)+1],last[(remainChar/2)+1];
    int i=0,f=0,l=(remainChar/2)-1;
    while(i!=total)
    {
        int evenCount=-1;
        char evenChar;
        for(int i=1;i<=26;i++)
        {
            if(freq[i]>1)
            {
                evenCount=freq[i];
                evenChar=i+64;
                freq[i]=0;
                break;
            }
        }
        int ii=0,jj=0;
        while(ii!=evenCount/2)
        {
            first[f]=evenChar;
            f++;
            ii++;
        }
        while(jj!=evenCount/2)
        {
            last[l]=evenChar;
            l--;
            jj++;
        }
        i++;
    }

    for(int i=0;i<(remainChar/2);i++)
    {
        printf("%c",first[i]);
    }
    printf("-->");
    for(int i=(remainChar/2)-1;i>=0;i--)
    {
        printf("%c",last[i]);
    }

}
