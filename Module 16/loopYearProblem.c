#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0){
        if(year%100 !=0){
            printf("%d is a Leap Year",year);
        }
        else{
            if(year%400==0){
                printf("%d is a Leap Year",year);
            }
            else{
                printf("Not Leap Year");
            }
        }
    }
    else{
        printf("Not Leap year.");
    }

    return 0;
}
