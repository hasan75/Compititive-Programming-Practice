#include<stdio.h>
int main()
{
    int n=15;
    int arr[n+1];
    int a=1;
    int r = 2;
    arr[0]= a ;
    for(int i=1;i<n-1;i++){
        int term_ratio=1;
        for(int j=i;j>0;j--){
            term_ratio*=r;
        }
        arr[i]=a*term_ratio;
    }

    for(int i=0;i<15;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
