#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* log_file;
    FILE* output_file;
    input_file = fopen("input.txt","r");
    log_file = fopen("log.txt","a");
    output_file = fopen("output.txt","w");
    int i=0;
    if(input_file == NULL)
    {
        i++;
        printf("FILE NOT FOUND");
        fprintf(log_file,"FILE NOT FOUND for %dth TIME\n",i);
        fprintf(output_file,"FILE NOT FOUND for %dth TIME\n",i);
    }
    else
    {
        int n;
        fscanf(input_file,"%d",&n);
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            fscanf(input_file,"%d",&arr[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            fprintf(output_file,"%d ",arr[i]);
        }
        fprintf(output_file,"\n");
        fprintf(output_file,"SUM of the numbers -> %d \n",sum);
    }
    fclose(input_file);
    fclose(output_file);
    return 0;
}
