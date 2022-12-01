#include <stdio.h>
int main()
{
   int N;
   scanf("%d",&N);
   int arr[N+5];
   for(int i=0;i<N;i++){
        if(i==0){
            arr[0]=0;
        }
        if(i==1){
            arr[1]=1;
        }
        if(i>1){
            arr[i]= arr[i-1]+arr[i-2];
        }
   }
   printf("\n");
   for(int j=0;j<N;j++){
    printf("%d ",arr[j]);
   }

   return 0;
}
