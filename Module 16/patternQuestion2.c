#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
