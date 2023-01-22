
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void solve(int t)
{
    int N;
    scanf("%d",&N);
    if(N>=1 && N<=1000)
    {
        int a[N+1];
        for(int i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
        }
        int S;
        scanf("%d",&S);
        for(int i=0;i<N;i++)
        {
            if(a[i]==S)
            {
                printf("Case %d: %d\n",t,i+1);
                return;
            }
        }
        printf("Case %d: Not Found\n",t);
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        solve(i);
    }
    return 0;
}


