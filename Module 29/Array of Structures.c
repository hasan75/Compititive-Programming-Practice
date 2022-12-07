#include<stdio.h>
#include<stdlib.h>

struct Student{
    double weight;
    int roll;
};
int main()
{
    struct Student s[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter Roll and weight for Student %d\n",i+1);
        scanf("%d",&s[i].roll);
        scanf("%lf",&s[i].weight);
        printf("\n");
    }

    for(int i=0;i<10;i++)
    {
        printf("The Roll and Weight for Student %d\n",i+1);
        printf("Roll-->%d, Weight -->%lf\n",s[i].roll,s[i].weight);
    }
    return 0;

}
