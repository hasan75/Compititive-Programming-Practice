#include<stdio.h>
int main()
{
    int n,even=0,odd=0,evenPos, oddPos;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even+=1;
            if(even == 1){
                evenPos = j+1;
            }
        }
        else{
            odd+=1;
            if(odd == 1){
                oddPos = j+1;
            }
        }
    }

    if(even == 1){
        printf("%d", evenPos);
    }
    else if(odd == 1){
        printf("%d", oddPos);
    }
}
