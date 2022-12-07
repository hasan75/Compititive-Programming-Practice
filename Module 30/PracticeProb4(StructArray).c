#include<stdio.h>
#include<stdlib.h>

struct Employee
{
    int id;
    char name[50];
    float sallary;
};

void print_info(int i, struct Employee e)
{
    printf("Employee Number: %d\n",i+1);
    printf("ID: %d\n",e.id);
    printf("Name: %s\nSallary: %.2f\n\n",e.name,e.sallary);
}

int main()
{
    struct Employee emp[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&emp[i].id);
        scanf("%s",emp[i].name);
        scanf("%f",&emp[i].sallary);
    }
    float sallary_sum = 0;
    for(int i=0;i<5;i++)
    {
        if(emp[i].id%2 ==0)
        {
            print_info(i,emp[i]);
            sallary_sum+=emp[i].sallary;
        }
    }
    printf("Sallary of these employees: %.2f\n",sallary_sum);
    return 0;
}
