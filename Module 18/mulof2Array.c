#include<stdio.h>
int main()
{
    int m,n,o,p;
    int a,b,c,d,i,j,k,l;
    scanf("%d %d %d %d",&m,&n,&o,&p);
    int mat1[m][n],mat2[o][p],mul[m][p];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat1[i][j]);
    for(i=0;i<o;i++)
        for(j=0;j<p;j++)
            scanf("%d",&mat2[i][j]);

    printf("\nMatrix 1 is: \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 is: \n");

    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }


    if(n == o)
    {
        for(i=0;i<m;i++){
            for(j=0;j<p;j++){
                mul[i][j]=0;
                for(int x=0;x<n;x++){
                    mul[i][j]+= mat1[i][k]*mat2[k][i];
                }
            }
        }

        printf("\n\nThe Multiplication of Matrix 1 and Matrix 2 is : \n\n");

        for(i=0;i<o;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d ",mat2[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("To do matrix multiplication you  have to input two matrix where the first matrix's columns equals to the seconds matrics row\nBut here the columns of mat1 is %d and rows of mat2 is %d",n,o);
    }

    return 0;
}
