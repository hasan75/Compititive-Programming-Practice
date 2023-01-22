
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    if(n>0 && n<=100)
    {
       char s[n+2];
       int freq[27];
       for(int i=0;i<n;i++)
       {
           scanf("%c",&s[i]);
       }
       for(int i=1;i<=26;i++)
       {
           freq[i]=0;
       }
       for(int i=0;i<n;i++)
       {
           freq[s[i]-'a'+1]++;
       }
       int chrs=0;
       for(int i=1;i<=26;i++)
       {
           if(freq[i]==1)
           {
               chrs++;
           }
       }
       printf("%d\n",chrs);
    }
}


