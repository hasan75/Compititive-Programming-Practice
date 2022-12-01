#include<stdio.h>
int main()
{
    int row=3,col=3;
    int r;
    scanf("%d",&r);
    int arr[row][col];
    int indexArray[r][2];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=2;j++){
            scanf("%d",&indexArray[i][j]);
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=col;j++)
        {
            arr[i][j]=0;
        }
    }

    for(int i=1,j=1;i<=r;i++)
    {
        arr[indexArray[i][j]][indexArray[i][j+1]]=1;
    }
    int emptyCell=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=col;j++)
        {
            if(arr[i][j]==0){
                emptyCell++;
            }
        }
    }
    printf("Total empty cells - %d\n",emptyCell);
        for(int i=1;i<=r;i++){
        for(int j=1;j<=col;j++)
        {
            if(arr[i][j]==0){
                printf("%d %d\n",i,j);
            }
        }
    }


}
