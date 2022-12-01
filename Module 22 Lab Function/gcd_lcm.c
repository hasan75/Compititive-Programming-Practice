#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{
    int l,s;
    if(a>b)
    {
        l=a;
        s=b;
    }
    else{
        l=b;
        s=a;
    }
    for(int i=s;i>=1;i--)
    {
        if(l%i==0 && s%i==0)
        {
            return i;
        }
    }
}

int lcm(int a,int b)
{
    int l,s;
    if(a>b)
    {
        l=a;
        s=b;
    }
    else{
        l=b;
        s=a;
    }
    /*
    for(int i=s;;i++)  //for(int i=s;i<=s*l;i++);
    {
        if(i%s==0 && i%l==0)
        {
            return i;
        }
    }
    */
    return (s*l)/gcd(s,l);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));
    printf("LCM of %d %d is %d\n",a,b,lcm(a,b));

    return 0;
}
