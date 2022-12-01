#include<stdio.h>
int main()
{
    int h,min;
    scanf("%d %d",&h,&min);
    int minutes = h*60 + min;
    printf("Minutes: %d",minutes);
    return 0;
}
