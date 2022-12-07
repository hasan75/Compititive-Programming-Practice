#include<stdio.h>
#include<stdlib.h>
struct Student{
double mark;
int roll;
int age;
};


int main()
{
    struct Student s={.roll=12,.mark=87.5,.age=12};
    struct Student s1={.roll=22,.mark=89.5,.age=22};
    struct Student* sp;

    sp=&s;
    //printf("%d\n",sizeof(struct Student));
    //printf("%p\n",sp);
    printf("Roll:%d Mark:%lf Age:%d\n",sp->roll,sp->mark,sp->age);
}
