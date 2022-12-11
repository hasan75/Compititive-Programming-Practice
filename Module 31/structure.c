#include<stdio.h>

struct Student
{
    int roll;
    double mark;

};

int main()
{
    struct Student hasan;
    printf("%d",sizeof(struct Student));

    return 0;
}
