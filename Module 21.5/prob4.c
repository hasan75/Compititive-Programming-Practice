#include<stdio.h>
#include<math.h>

void evenNum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    evenNum(n);
    return 0;
}

void evenNum(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return;

}

