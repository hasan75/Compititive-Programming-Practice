#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    if(row == col){
        int diagonal = 1;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++){
                scanf("%d",&arr[i][j]);
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i+j == (row-1) && arr[i][j] != 0){
                    continue;
                }
                if(arr[i][j] != 0){
                    diagonal=0;
                }
            }
        }

    if(diagonal == 1){
        printf("The matrix is diagonal.\n");
    }
    else{
        printf("The matrix is not diagonal.\n");
                for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    }
    else{
        printf("This is not a diagonal Matrix.\n");
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
}
