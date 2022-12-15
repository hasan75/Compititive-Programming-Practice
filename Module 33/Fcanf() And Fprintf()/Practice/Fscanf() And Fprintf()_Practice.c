#include<stdio.h>
int main()
{
    FILE* input_file;
    FILE* output_file;
    input_file = fopen("input_file.txt","r");
    output_file = fopen("output_file.txt","w");
    if(input_file == NULL)
    {
        fprintf(output_file,"INPUT FILE NOT FOUND.\n");
        return 0;
    }
    else
    {
        int n;
        fscanf(input_file,"%d",&n);
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            int a;
            fscanf(input_file,"%d",&a);
            sum+=a;
        }
        fprintf(output_file,"SUM Is --> %d \n",sum);
    }
    return 0;

}
