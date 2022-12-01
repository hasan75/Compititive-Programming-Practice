#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int newArr[max+1];

    for(int i=0;i<=(max);i++){
        newArr[i]=0;
    }

    for(int i=0;i<n;i++){
        newArr[arr[i]]+=1;
    }
    int count=0;
    int minCount=0;

    for(int i=max;i>=1;i--){
        if(newArr[i] == 1){
            count++;
        }
        if(count==3){
            printf("The third largest value is %d\n ",i);
            break;
        }
    }

    for(int i=1;i<=max;i++){
        if(newArr[i]==1){
            minCount++;
        }
        if(minCount==4){
            printf("The fourth minimum is %d\n",i);
            break;
        }
    }

    return 0;
}
