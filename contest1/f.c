#include<stdio.h>
#include<string.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        int Runs[7],sum=0;
        for(int i=0;i<6;i++){
            scanf("%d",&Runs[i]);
            sum+=Runs[i];
        }
        if(sum==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
