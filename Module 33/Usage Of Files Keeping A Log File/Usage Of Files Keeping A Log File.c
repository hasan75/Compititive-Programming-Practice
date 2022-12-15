#include<stdio.h>
int main()
{
    FILE* log_file;
    FILE* input_file;
    log_file = fopen("log.txt","a"); //a for adding the texts to log file everytime;
    input_file = fopen("input.txt","r");
    if(input_file == NULL)
    {
        fprintf(log_file,"File not found.\n");
        return 0;
    }
    return 0;
}
