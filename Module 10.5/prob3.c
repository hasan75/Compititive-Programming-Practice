#include <stdio.h>
int main()
{
    int N,sumOfOdds=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]%2 != 0){
            sumOfOdds+=arr[i];
        }
    }
    if(sumOfOdds % 2 == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
