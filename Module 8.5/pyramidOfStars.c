#include <stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    int reverseRow = row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=(((reverseRow*2)-2)/2);j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        for(int l=1;l<=(((reverseRow*2)-2)/2);l++){
            printf(" ");
        }
        reverseRow-=1;
        printf("\n");
    }

    return 0;
}
