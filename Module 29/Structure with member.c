#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Student
{
    double weight;
    int roll;
    char name[55];

} ;
int main()
{

    struct Student s1;
    char s_name[55];
    scanf("%lf %d",&s1.weight,&s1.roll);
    scanf("%s",&s_name);
    strcat(s1.name,s_name);
    printf("The Student Information:\n");
    printf("Name:%s\nRoll:%d\nWeight:%lf\n",s1.name,s1.roll,s1.weight);

    return 0;


}
