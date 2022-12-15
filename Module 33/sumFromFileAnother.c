#include<stdio.h>

int main()
{
    FILE* input_file_sum;
    input_file_sum = fopen("filesum input.txt","r");
    if(input_file_sum == NULL)
    {
        printf("No Input file found");
        return 0;
    }
    FILE* output_file_sum;
    output_file_sum = fopen("new filesum output.txt","w");
    while(1)
    {
        char ch = fgetc(input_file_sum);
        if(ch == EOF)
            break;
        fputc(ch,output_file_sum);
    }
    return 0;
}
