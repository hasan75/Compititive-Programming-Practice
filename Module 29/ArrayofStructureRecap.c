#include<stdio.h>
#include<stdlib.h>

struct Car{
    double price;
    int serial;
};

int main()
{
    struct Car s[10];
    for(int i=0;i<10;i++)
        scanf("%d %lf",&s[i].serial,&s[i].price);
    for(int i=0;i<10;i++)
        printf("For Student %d:\nSerial:%d\nPrice:%lf\n",i+1,s[i].serial,s[i].price);

    return 0;
}
