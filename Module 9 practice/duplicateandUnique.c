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
    int duplicate=0;
    int unique=0;

    for(int i=1;i<=max;i++){
        if(newArr[i]==1){
            unique+=1;
        }
        else if(newArr[i]>1){
            duplicate+=1;
        }
    }

    printf("Unique elements are %d\n Total duplicate found: %d\n",unique,duplicate);


    return 0;
}

