
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int space = 0;
    for(int i=N;i>0;i--){
        for(int sp=0;sp<space;sp++){
            printf(" ");

        }
        space++;
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
