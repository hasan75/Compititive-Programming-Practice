#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,s;
        scanf("%d %d",&a,&b);
        if(a==0)
        {
            s=1;
        }
        else if(a!=0 && b==0)
        {
            s=a+1;
        }
        else{
            s=(a+(2*b))+1;
        }

        printf("%d\n",s);

    }
    return 0;
}
