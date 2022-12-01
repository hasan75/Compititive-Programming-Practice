#include<stdio.h>
#include<math.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        int a=n;
        while(a!=0)
        {
            if(!(a%10== 4 || a%10==7))
            {
                flag=1;
                break;
            }
            a=a/10;
        }
        if(flag==0)
        {
            printf("YES\n");
            return 0;
        }
        else{
            if(n%4==0 || n%7==0 || n%47==0)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }

    return 0;
}
