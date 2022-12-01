#include <stdio.h>
int main()
{
        int n,i;
        scanf("%d",&n);
        int arr[n+1],max=101;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int newArr[max];
        for(i=0;i<max;i++){
            newArr[i]=0;
        }
        for(i=1;i<=n;i++){
            newArr[arr[i]]+=1;
        }
        int index;
        for(i=1;i<=n;i++){
            if(newArr[arr[i]]==1){
                index=i;
                break;
            }
        }
        printf("%d\n",index);
}
