#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* output_file;
    FILE* log_file;
    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");
    log_file = fopen("log.txt","a");
    int year;
    fscanf(input_file,"%d",&year);
    if(year%4==0)
    {
        if(year%100!=0)
        {
            fprintf(output_file,"%d --> YES.\n",year);
            fprintf(log_file,"%d --> YES.\n",year);
        }
        else
        {
            if(year%400==0)
            {
                fprintf(output_file,"%d --> YES.\n",year);
                fprintf(log_file,"%d --> YES.\n",year);
            }
            else
            {
                fprintf(output_file,"%d --> NO.\n",year);
                fprintf(log_file,"%d --> NO.\n",year);
            }
        }
    }
    else
    {
        fprintf(output_file,"%d --> NO. \n",year);
        fprintf(log_file,"%d --> NO. \n",year);
    }

    return 0;

}
