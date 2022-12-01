#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    if(row== col)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++){
                scanf("%d",&arr[i][j]);
            }
        }

        int one = arr[0][0];
        int diag = 1;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==j && arr[i][j] == one){

                    continue;
                }
                if(arr[i][j] != 0){
                    diag=0;
                }
            }
        }

        if(diag == 0){
            printf("Not Scalar.\n");
        }
        else{
            printf("Scaler\n");
        }
    }
    else{
        printf("Not possible\n");
    }
}
