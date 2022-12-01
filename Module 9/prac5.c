#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }

  int target;

  scanf("%d",&target);
  int notFound = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        if(i!=j){
            if(arr[i]+arr[j] == target){
                printf("YES\tarr[i]:%d\tarr[j]:%d\n",arr[i],arr[j]);
                notFound++;
                break;
            }
        }
        if(notFound !=0){
            break;
        }
    }
  }
  if(notFound == 0){
    printf("NO");

  }


}
