#include<stdio.h>
int main()
{
    int row=5,col=5,x,y;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 1){
                x=i;
                y=j;
            }
        }
    }

    int ans = 0;

    if(x>2){
        ans+=(x-2);
    }
    else{
        ans+=(2-x);
    }


    if(y>2){
        ans+=(y-2);
    }
    else{
        ans+=(2-y);
    }

    printf("%d",ans);

    return 0;

}
