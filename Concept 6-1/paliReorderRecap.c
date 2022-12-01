#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char s[100005],freq[27];
    scanf("%s",s);
    int n= strlen(s);
    for(int i=0;i<=26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        freq[(s[i]-'A')+1]++;
    }
    int oddCnt=-1,odd=0,total=0;
    char oddChar;
    for(int i=1;i<=26;i++)
    {
        if(freq[i]>0)
        {
            total++;
        }
        if(freq[i]%2!=0)
        {
            oddCnt=freq[i];
            oddChar=i+64;
            freq[i]=0;
            odd++;
            if(odd>1)
            {
                printf("NO SOLUTION\n");
                return 0;
            }
        }
    }
    int remainChar=n,i=0;
    if(oddCnt!=-1)
    {
        total-=odd;
        remainChar-=oddCnt;
    }

    char first[(remainChar/2)+1],last[(remainChar/2)+1];
    int f=0,l=(remainChar/2)-1;
    while(i!=total)
    {
        int evenCnt;
        char evenChar;
        for(int i=0;i<=26;i++)
        {
            if(freq[i]>1)
            {
                evenCnt=freq[i];
                evenChar=i+64;
                freq[i]=0;
                break;
            }
        }
        int ii=0,jj=0;
        while(ii!= evenCnt/2)
        {
            first[f]=evenChar;
            f++;
            ii++;
        }
        while(jj!=evenCnt/2)
        {
            last[l]=evenChar;
            l--;
            jj++;
        }

        i++;
    }

    for(int i=0;i<remainChar/2;i++)
    {
        printf("%c",first[i]);
    }
    if(oddCnt!=-1)
    {
        int oc=0;
        while(oc!=oddCnt)
        {
            printf("%c",oddChar);
            oc++;
        }
    }
    for(int i=0;i<remainChar/2;i++)
    {
        printf("%c",last[i]);
    }
    return 0;
}
