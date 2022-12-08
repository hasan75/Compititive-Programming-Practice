#include<stdio.h>

struct phitron_student
{
    char email[100],name[55],date[20];
    float marks;
};
//struct person p1; //global scope

void display(struct phitron_student heroes[])
{
    for(int i=0;i<2;i++)
    {
        printf("\n\nInformation of hero %d\n",i+1);
        printf("Name:%s\n",heroes[i].name);
        printf("Email:%s\n",heroes[i].email);
        printf("Date:%s\n",heroes[i].date);
        printf("Marks:%.2f\n",heroes[i].marks*0.9);
    }
}

int main()
{
    struct phitron_student heroes[3];
    for(int i=0;i<2;i++)
    {
        printf("Enter Information of hero %d\n",i+1);
        printf("Name:");
        fflush(stdin);  //output ta flush kore dibe
        gets(heroes[i].name);
        printf("Email:");
        fflush(stdin);
        gets(heroes[i].email);
        printf("Date:");
        fflush(stdin);
        gets(heroes[i].date);
        printf("Marks:");
        scanf("%f",&heroes[i].marks);
    }

    display(heroes);

    return 0;

}

