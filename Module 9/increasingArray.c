#include <stdio.h>
int main()
{
    int n,i,moves=0;
    scanf("%d",&n);
    int arr[200005];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<n;j++){
        if(arr[j]<arr[j-1]){
            moves+= arr[j-1]-arr[j];
            arr[j]= arr[j-1];
        }
    }
    printf("%d",moves);
}
