#include<stdio.h>
int leap_year(int y)
{
    if((y%400==0)||(y%4==0 && y%100!=0))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int is_distict(int n)
{
    int count_digits[10]={0,0,0,0,0,0,0,0,0,0},ld;
    while(n>0)
    {
        ld=n%10;
        count_digits[ld]++;
        n/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(count_digits[i]>1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int year;
    scanf("%d",&year);
    if(leap_year(year) && is_distict(year))
    {
        printf("Leap Year with Distinct digits\n");
    }
    else
        printf("Year is not good to be leap year and distincts");
    return 0;
}


//leap year 2020, 2024,2028,2036,...2096,2104
//digitcr digits
