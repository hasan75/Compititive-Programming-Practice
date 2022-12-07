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

    struct Student s1;
    struct Student s2;
    char name1[55],name2[55];
    printf("Enter Student 1 Information:\n");
    scanf("%d %d %f",&s1.roll,&s1.age,&s1.weight);
    scanf("%s",name1);
    printf("Enter Student 2 Information:\n");
    scanf("%d %d %f",&s2.roll,&s2.age,&s2.weight);
    scanf("%s",name2);
    strcpy(s1.name,name1);
    strcpy(s2.name,name2);
    printf("Information about Student 1 are\nRoll: %d\nName: %s\nAge: %d\nWeight: %f\n\n",s1.roll,s1.name,s1.age,s1.weight);
    printf("Information about Student 2 are\nRoll: %d\nName: %s\nAge: %d\nWeight: %f\n\n",s2.roll,s2.name,s2.age,s2.weight);

}
