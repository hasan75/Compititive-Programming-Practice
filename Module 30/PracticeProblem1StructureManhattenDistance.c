// MD Anowar Hossain Hawlader
#include<stdlib.h>
#include<stdio.h>
struct Point
{
    int x;
    int y;
};

int manhatten_distance(struct Point p, struct Point q)
{
    return (abs(p.x-q.x)+abs(p.y-q.y));
}

int main()
{
    struct Point p1,p2;
    scanf("%d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y);
    int distance = manhatten_distance(p1,p2);
    printf("Manhatten Distance: %d\n",distance);

    return 0;
}
