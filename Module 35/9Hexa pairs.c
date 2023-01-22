
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int gcd(int a,int b)
{
    int l,s;
    if(a>b)
    {
        l=a;
        s=b;
    }
    else
    {
        l=b;
        s=a;
    }
    for(int i=s; i>=1; i--)
    {
        if(l%i==0 && s%i==0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n>=2 && n<=100)
        {
            int a[n+2];
            for(int i=1; i<=n; i++)
            {
                scanf("%d",&a[i]);
            }
            int hexaCount=0;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i!=j)
                    {
                        int gcd_for_1 = gcd(a[i],a[j]);
                        if(gcd_for_1 == 1)
                        {
                            hexaCount++;
                        }
                    }
                }
            }
            printf("%d\n",hexaCount);
        }
    }

}



