#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[55];
    int age;
    float weight;
};

int main()
{

    struct Student s1={.weight=75.60, .roll=12, .age=25,.name="Hasan Ahmed"}; //designated
    printf("Information about Student 1 are\nRoll: %d\nName: %s\nAge: %d\nWeight: %f\n\n",s1.roll,s1.name,s1.age,s1.weight);

}
