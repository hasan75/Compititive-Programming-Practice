#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    printf("Enter the array: ");
    for(int j=0;j<N;j++){
        scanf("%d",&arr[j]);
    }
    int Q;
    scanf("%d",&Q);
    int i,v;
    for(int k=0;k<Q;k++){
        scanf("%d %d",&i,&v);
        arr[i]+= v;
    }
    printf("the array is --");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}
