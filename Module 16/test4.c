#include<stdio.h>
int main()
{
    int array[2][3]= {{10,20,30},{40,50,60}};
    for(int k=0;k<2;k++){
        for(int l=0;l<3;l++){
            printf("%d ",array[k][l]);
        }
        printf("\n");
    }
    int i=1,j=0;

    array[i][j]=array[j][i];

    printf("\n%d,%d\n",array[i][j],array[j+1][i+1]);

    return 0;
}
