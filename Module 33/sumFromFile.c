#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt","r"); //read mode , write mood
    if(inputFile == NULL)
    {
        printf("No File was found.\n");
        return 0;
    }
    FILE *outputFile;
    outputFile = fopen("output3.txt","w");
    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF)
            break;
        fputc(ch,outputFile);
    }

    return 0;


}
