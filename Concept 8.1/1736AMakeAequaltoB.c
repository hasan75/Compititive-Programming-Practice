#include<stdio.h>
#include<math.h>

int maxx(a,b)
{
    if(a>b)
        return a;
    return b;
}

void solve()
{
    int n;
    scanf("%d",&n);
    int a[n+1],b[n+1],z1=0,z2=0,o1=0,o2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            z1++;
        else if(a[i]==1)
            o1++;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]==0)
            z2++;
        else if(b[i]==1)
            o2++;
    }
    int opt,rearrage;
    if(z1==z2 && o1==o2)
        opt=0;
    else
        opt=maxx(z1-z2,o1-o2);

    rearrage=opt;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            rearrage--;
    }
    if(rearrage<0)
        opt+=1;

    printf("%d\n",opt);


}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
