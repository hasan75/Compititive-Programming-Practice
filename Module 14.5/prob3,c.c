#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int l = strlen(s)-1;
    int sum=0;
    int i=0;
    while(i<l)
    {
        sum+= s[i]-96;
        i++;
    }
    for(int i=0;i<=100;i++)
    {
        if(pow(2,i)==sum)
        {
            printf("Yes\nconst = 2^%d",i);
            return 0;
        }
        else if(pow(2,i)>sum)
        {
            printf("NO\n");
            return 0;
        }
    }

    return 0;
}
