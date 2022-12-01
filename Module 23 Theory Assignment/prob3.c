#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        for(int i=0;i<=N;i++)
        {
            if(pow(2,i) == N)
            {
                printf("%d\n",N);
                break;
            }
            else if(pow(2,i)> N)
            {
                int a = pow(2,i);
                printf("%d\n",a);
                break;
            }
        }
    }
    return 0;
}
