#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* output_file;
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");
    if(input_file == NULL)
    {
        printf("Input file invalid.\n");
        return 0;
    }
    else
    {
        int n,sum=0;
        fscanf(input_file,"%d",&n);
        for(int i=0;i<n;i++)
        {
            int a;
            fscanf(input_file,"%d",&a);
            sum+=a%10;
        }
        fprintf(output_file,"Sum = %d\n",sum);
    }
    return 0;
}
