#include<stdio.h>
int main()
{
    int row=5,col=5;
    int arr[row][col];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int moves =0;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(arr[i][j] == 1)
            {
                if(i==3 && j==3){
                    moves=0;
                    break;
                }
                else if(i<3){
                    if(j<3){
                        moves=3-i+3-j;
                    }
                    else if(j>3){
                        moves=3-i+j-3;
                    }
                    else{
                        moves=3-i;
                    }

                }
                else if(i>3){
                    if(j<3){
                        moves=3-j+i-3;
                    }
                    else if(j>3){
                        moves=i-3+j-3;
                    }
                    else{
                        moves=i-3;
                    }

                }
                else if(i==3){
                    if(j<3){
                        moves=3-j;
                    }
                    else if(j>3){
                        moves=j-3;
                    }
                }

            }
        }
    }
    printf("%d",moves);
}
