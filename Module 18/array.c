#include<stdio.h>
int main()
{
    int arr[5]={0,0,0,0,0};
    arr[3]=75;

    arr[2] = arr[3]-5;

    scanf("%d",&arr[1]);

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//12 5 9 26 4 2 75 33 27 11
