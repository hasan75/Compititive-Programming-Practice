#include<stdio.h>

int main()
{
    FILE* input_file;
    input_file = fopen("input.txt","r");
    FILE* output_file;
    output_file = fopen("output.txt","w");
    if(input_file == NULL)
    {
        fprintf(output_file,"NO INPUT FILE FOUND.\n");
        return 0;
    }
    int n;
    fscanf(input_file,"%d",&n);
    int sum =0;
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(input_file,"%d",&a);
        sum+=a;
    }
    fprintf(output_file,"SUM --> %d \n",sum);
    printf("SUM HAS BEEN INPUTTED FROM THE INPUT FILE AND THE OUTPUT IS SAVED IN THE OUTPUT FILE\n");
    return 0;
}
