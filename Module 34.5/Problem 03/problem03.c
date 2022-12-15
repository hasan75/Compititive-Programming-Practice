#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* output_file;
    int n;
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");
    if(input_file==NULL)
    {
        printf("Input File not found.\n");
        return 0;
    }
    else
    {
        int t;
        fscanf(input_file,"%d",&t);
        while(t--)
        {
            fscanf(input_file,"%d",&n);
            if(n>0)
            {
                for(int i=(-1)*n; i<=n; i++)
                    fprintf(output_file,"%d ",i);
                fprintf(output_file,"\n");
            }
            else
            {
                for(int i=n; i<=(-1)*n; i++)
                    fprintf(output_file,"%d ",i);
                fprintf(output_file,"\n");
            }
        }
    }
}
