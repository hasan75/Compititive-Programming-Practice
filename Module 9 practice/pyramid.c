#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int space = n-1;
   for(int i=1;i<=n;i++){
        for(int sp=1;sp<=space;sp++)
        {
            printf(" ");
        }
        space--;
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
   }
}
