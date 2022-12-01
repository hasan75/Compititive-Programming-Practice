#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int match = arr[0];
    int inc = 0;
    for(int j=1;j<N;j++){
        if(arr[j]!= match){
            inc++;
            break;
        }
    }
    if(inc == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
