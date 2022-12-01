#include<stdio.h>
int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    if(row == col){
        int scaler = 1;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j){
                    if(arr[i][j] != 1){
                        scaler = 0;
                    }
                    continue;
                }
                if(arr[i][j] !=0)
                {
                    scaler = 0;
                }
            }
        }
        if(scaler == 1){
            printf("Scaler\n");
        }
        else{
            printf("Not Scaler.\n");
        }


    }
    else{
        printf("Row and Column must be same.\n");
    }

    return 0;
}
