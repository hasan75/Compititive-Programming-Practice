#include<stdio.h>
int main()
{
    int n;
    FILE* input_file;
    FILE* output_file;
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");
    if(input_file == NULL)
    {
        printf("Input File not found.\n");
        fprintf(output_file,"Input File not found.\n");
        return 0;
    }
    else
    {
        fscanf(input_file,"%d",&n);
        for(int i=1;i<=n;i++)
        {
            fprintf(output_file,"%d ",i);
        }
    }
    return 0;
}
