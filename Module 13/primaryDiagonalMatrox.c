 #include<stdio.h>
 int main()
 {
     int row,column;
     scanf("%d %d",&row,&column);
     int arr[row][column];
     int diagonal=1;
     if(row==column){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i==j && arr[i][j]!=0)
                {
                    continue;
                }
                if(arr[i][j] != 0){
                    diagonal=0;
                }
            }
        }
        if(diagonal == 1){
            printf("This is a diagonal Matrix.\n");
            for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }
        else{
            printf("This is not a diagonal Matrix.\n");
        }
     }
     else{
        printf("This is not a diagonal matrix. Please enter a diagonal Matrix.\n");
     }
 }
