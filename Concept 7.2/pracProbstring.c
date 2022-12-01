#include<stdio.h>

int check_power(int n)
{
    int ans = 0;
    while(n!=1)
    {
        int rem=n%2;
        n/=2;
        if(rem!=0)
        {
            ans=0;
            break;
        }
        ans++;

    }

    return ans;
}

int main(void)
{
    char s[1000];
    scanf("%s",s);
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
        sum+=s[i]-'a'+1;
    }
    if(check_power(sum)!=0)
    {
        printf("YES\nCount = 2^%d",check_power(sum));
    }
    else{
        printf("NO\n");
    }
}
