#include<stdio.h>
int main()
{
    int n,j=1,sum=0;
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        printf("%d ",j);
        sum+=j;
        j+=2;
    }
    printf("\n%d",sum);

    return 0;
}
