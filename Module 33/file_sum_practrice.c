#include<stdio.h>

int main()
{
   FILE* input_file;
   input_file = fopen("test_input_file.txt","r");
   if(input_file == NULL)
   {
       printf("No file found.\n");
       return 0;
   }
   FILE* output_file;
   output_file = fopen("test_output_file.txt","w");
   while(1)
   {
       char ch = fgetc(input_file);
       if(ch == EOF){break;}
       putc(ch,output_file);
   }
   return 0;
}
