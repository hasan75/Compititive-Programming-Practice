#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* output_file;
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");
    if(input_file==NULL)
    {
        printf("Input File not found.\n");
        return 0;
    }
    else
    {
        int n;
        fscanf(input_file,"%d",&n);
        for(int i=0,j=4;i<n;i++,j--)
        {
            for(int l=0;l<j;l++)
            {
                fprintf(output_file," ");
            }
            for(int k=0;k<n;k++)
            {
                fprintf(output_file,"#");
            }
            fprintf(output_file,"\n");
        }
    }
    return 0;
}
