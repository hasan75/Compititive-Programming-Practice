#include<stdio.h>
#include<math.h>
void func(int n);
int main()
{
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}

void func(int n)
{
    if(n>0)
    {
        for(int i=-n;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    else{
        for(int i=n;i<=(-1)*n;i++)
        {
            printf("%d ",i);
        }
    }

    return;
}
