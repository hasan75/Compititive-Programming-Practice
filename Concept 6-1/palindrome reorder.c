#include<stdio.h>
#include<string.h>
#include<math.h>

/*

    ***Observation***

1. If one single character count is even,
   the number itself is a palindrome.
2. If one palindrome is merged with another palindrome,
   the final string will be a palindrome.
3.Odd count character should be only one..
  It can be of 1,3,5 or any odd number..
   But there should be only one odd counted value.
*/
int main()
{
    char s[1000005];
    scanf("%s",s);
    int l = strlen(s);
    int freq[27];
    for(int i=1;i<=26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<l;i++)
    {
        freq[(s[i]-'A')+1]++;
    }
    /*
    for(int i=1;i<=26;i++)
    {
        printf("%d-->%d\n",i,freq[i]);
    }
    */

    int oddValue=-1,total=0,odd=0;
    char oddChar;

    for(int i=1;i<=26;i++)
    {
        if(freq[i]>=1)
            total++;
        if(freq[i]%2!=0)
        {
            oddValue=freq[i];
            oddChar=i+64;
            freq[i]=0;
            odd++;

        }
    }
    if(odd>1)
    {
        printf("NO SOLUTION\n");
        return 0;
    }

    //printf("\nKing is %c, value: %d\nTotal: %d\n",oddChar,oddValue,total);

    int i=0,remainChar=l;
    if(oddValue != -1)
    {
        total-=1;
        remainChar-=oddValue;
    }

    int le=0,r=(remainChar/2)-1;

    char first[(remainChar/2)+1],last[(remainChar/2)+1];
    while(i!=total)
    {
        int evenValue=-1;
        char evenChar;

        for(int i=1;i<=26;i++)
        {
            if(freq[i]>1)
            {
                evenValue=freq[i];
                evenChar=i+64;
                freq[i]=0;
                break;
            }
        }
        //printf("%d %c\n",evenValue,evenChar);
        int ii=0,jj=0;
        while(ii!=(evenValue/2))
        {
            first[le]= evenChar;
            le++;
            ii++;
        }
        while(jj!=(evenValue/2))
        {
            last[r]= evenChar;
            r--;
            jj++;
        }
        i++;
    }

    for(int i=0;i<(remainChar/2);i++)
    {
        printf("%c",first[i]);
    }
    if(oddValue!=-1)
    {
        int co=0;
        while(co!=oddValue)
        {
            printf("%c",oddChar);
            co++;
        }
    }
    for(int i=0;i<(remainChar/2);i++)
    {
        printf("%c",last[i]);
    }


    return 0;
}
