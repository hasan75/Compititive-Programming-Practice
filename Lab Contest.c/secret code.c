#include <stdio.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        int count = 0;
        if(N==0 || N==1){
            count=1;
        }
        for(int i=2;i<=sqrt(N);i++){
            if((N%i)== 0)
            {
                count++;
            }
        }
        if(count == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
