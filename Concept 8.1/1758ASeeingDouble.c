#include<stdio.h>
#include<string.h>

void solve()
{
    char s[102];
    scanf("%s",s);

    printf("%s",s);
    printf("%s\n",strrev(s));

}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }

    return 0;
}
