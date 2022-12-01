#include<stdio.h>

int find_cost(char s[])
{
    int i=0,sum=0;;
    while(s[i]!='\0')
    {
       sum+=(s[i]-'a')+1;
       i++;
    }
    return sum;
}

void check_power(int cost)
{
    for(int i=1;i<cost;i++)
    {
        if(pow(2,i)==cost)
        {
            printf("Yes\ncost = 2^%d\n",i);
            return 0;
        }
        else if(pow(2,i)>cost)
        {
            printf("NO\n");
            return 0;
        }
    }
}

void solve()
{
    char s[100];
    scanf("%s",s);
    int cost = find_cost(s);
    check_power(cost);
}
int main()
{
    solve();
}
