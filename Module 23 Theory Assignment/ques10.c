#include<stdio.h>
#include<math.h>
char grade(int m);
int main()
{
    int mark;
    printf("Enter the mark of the student: ");
    scanf("%d",&mark);
    while(mark<0 || mark>100)
    {
        printf("Enter the mark of the student: ");
        scanf("%d",&mark);
    }
    printf("Grade is: %c\n",grade(mark));

    return 0;
}

char grade(int m)
{
    if(m >=80 && m<=100)
    {
        return 'A';
    }
    else if(m>=60 && m<=79)
    {
        return 'B';
    }
    else if(m>=40 && m<=59)
    {
        return 'C';
    }
    else if(m>=0 && m<=39)
    {
        return 'F';
    }

}
