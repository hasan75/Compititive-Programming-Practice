#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* output_file;
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");
    if(input_file == NULL)
    {
        printf("Input File not found.\n");
        return 0;
    }
    while(1)
    {
        char ch = fgetc(input_file);
        if(ch==EOF) break;
        fputc(ch,output_file);
    }

}
