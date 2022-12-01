#include<stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=5){
        sum+= pow(i,2);
        i++;
    }
    printf("%d",sum);
}
