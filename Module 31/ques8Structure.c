#include<stdio.h>
#include<math.h>
#include<string.h>

struct Student
{
    float marks;
    int roll;
    char name[70];
};

int main()
{
    struct Student stdnt;
    struct Student* stdnt_ptr;
    stdnt_ptr = &stdnt;

    printf("Enter information:\n");
    printf("Enter Name: ");
    //getchar();
    gets(stdnt.name);
    printf("Enter roll number: ");
    scanf("%d",&stdnt.roll);
    printf("Enter marks: ");
    scanf("%f",&stdnt.marks);

    printf("Displaying Information:\n");
    printf("Name: %s\nRoll number: %d\nMarks: %.2f\n",stdnt_ptr->name,stdnt_ptr->roll,stdnt_ptr->marks);

    return 0;
}
