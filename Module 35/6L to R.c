
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void solve()
{
    int L,R;
    scanf("%d %d",&L,&R);
    if((L>=1 && L<=100) && (R>=1 && R<=100) && (L<R))
    {
        for(int n=L; n<=R; n++)
        {
            if(n==1)
            {
                printf("1 ");
            }
            else if(n==2)
            {
                printf("2 ");
            }
            else
            {
                int prime = 1;
                for(int i=2; i<(n); i++)
                {
                    if(n%i==0)
                    {
                        prime = 0;
                        break;
                    }
                }
                if(prime) printf("%d ",n);
            }
        }
        printf("\n");
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}

