#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,max=101;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
         scanf("%d",&arr[i]);
    }
    int newArr[max];

    for(i=0;i<(max);i++){
        newArr[i]=0;
    }

    for(int i=1;i<=n;i++){
        newArr[arr[i]]+=1;
    }

    int index;
    for(int i=1;i<=n;i++){
        if(newArr[arr[i]] == 1){
            index=i;
            break;
        }
    }

    printf("%d\n",index);

    }
    return 0;
}
