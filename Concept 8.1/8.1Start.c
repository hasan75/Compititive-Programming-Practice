
#include<stdio.h>

struct person
{
    int age;
    float salary;
};
//struct person p1; //global scope

void display(struct person p)
{
    printf("Age:%d\nSalary:%.2f\n",p.age,p.salary);
}

int main()
{
    struct person p1;
    p1.age=30;
    p1.salary=2800;

    display(p1);

    return 0;

}
