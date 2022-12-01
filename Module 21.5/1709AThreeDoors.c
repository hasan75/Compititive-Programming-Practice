#include<stdio.h>
#include<math.h>
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
                if(a==2)
                {
                    if(b!= 3)
                    {
                        flag = 0;
                    }
                }
                else if(a==3)
                {
                    if(c!=2)
                    {
                        flag=0;
                    }
                }
                else{
                    flag=0;
                }
            }
            else if(x==2)
            {
                if(b==1)
                {
                    if(a!=3)
                    {
                        flag=0;
                    }
                }
                else if(b==3)
                {
                    if(c!=1)
                    {
                        flag=0;
                    }
                }
                else{
                    flag=0;
                }
            }
            else if(x==3)
            {
                if(c==2)
                {
                    if(b!=1)
                    {
                        flag=0;
                    }
                }
                else if(c==1)
                {
                    if(a!=2)
                    {
                        flag=0;
                    }
                }
                else{
                    flag=0;
                }
            }
        }


        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
