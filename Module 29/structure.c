#include<stdio.h>
#include<math.h>

struct Student{
int roll;
char name[55];
int age;
float weight;
};

int main()
{
    int a;
    a=7;
    struct Student stud ={12,"Hasan Ahmed",24,75.50};
//    stud.roll=1;
//    stud.age=22;
//    stud.weight=50.50;

    //for the structure
    printf("Roll:%d\nName:%s\nAge:%d\nWeight:%f\n",stud.roll,stud.name,stud.age,stud.weight);

    return 0;

}
