#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a,b,c,flag=1;
        scanf("%d",&x);
        scanf("%d %d %d",&a,&b,&c);
        if((a!=b)&&(a!=c)&&(b!=c))
        {
            if(x==1)
            {
                if(!(b==0 || c==0))
                {
                    flag=0;
                }
            }
            else if(x==2)
            {
                if(!(a==0 || c==0))
                {
                    flag=0;
                }
            }
            else if(x==3)
            {
                if(!(a==0 || b==0))
                {
                    flag=0;
                }
            }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
