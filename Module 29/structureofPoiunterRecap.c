#include<stdio.h>
#include<stdlib.h>

struct Student{
    double weight;
    int roll;
    int age;
};

int main()
{
    struct Student s1={.roll=12,.age=20,.weight=45.50};
    struct Student* stptr;
    stptr=&s1;
    printf("Roll->%d Age->%d Weight->%lf\n",stptr->roll,stptr->age,stptr->weight);

    return 0;
}
