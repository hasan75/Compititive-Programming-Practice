#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxx = arr[0];

    for(int j=1;j<10;j++){
        if(maxx<arr[j]){
            maxx=arr[j];
        }
    }

    printf("%d ",maxx);
    return 0;
}

//12 5 9 26 4 2 75 33 27 11

