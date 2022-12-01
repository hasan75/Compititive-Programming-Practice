#include<stdio.h>
int main()
{
    int n=15,a = 1,r=2;
    int arr[n];
    int value=a;
    for(int i=0;i<n;i++){
        printf("%d ",value);
        value=value*r;
    }
}
