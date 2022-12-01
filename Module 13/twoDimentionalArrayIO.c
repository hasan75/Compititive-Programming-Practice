#include <stdio.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);

    int arr[row][column];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            scanf("%d",&arr[row][column]);
        }
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            printf("%d ",arr[row][column]);
        }
        printf("\n");
    }

    return 0;
}
