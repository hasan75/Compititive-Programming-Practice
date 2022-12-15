#include<stdio.h>
#include<math.h>
void solve()
{
    int w,h,n;
    scanf("%d %d %d",&w,&h,&n);
    int pieces = 1,i=0;
    while(w%2==0 || h%2==0)
    {
        if(w%2==0)
        {
            w/=2;
            i++;
            continue;
        }
        else if(h%2==0)
        {
            h/=2;
            i++;
        }
    }
    if((int)pow(2,i) >= n)
        printf("YES\n");
    else
        printf("NO\n");
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
