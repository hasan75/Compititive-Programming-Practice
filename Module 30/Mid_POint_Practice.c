#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Point
{
    float x;
    float y;
};
struct Point mid(struct Point m,struct Point n)
{
    struct Point mid_point;
    mid_point.x = (m.x+n.x)/2;
    mid_point.y= (m.y+n.y)/2;
    return mid_point;
};
int main()
{
    struct Point p1,p2,p3;
    scanf("%f %f %f %f",&p1.x,&p1.y,&p2.x,&p2.y);
    p3 = mid(p1,p2);
    printf("Mid x:%.2f y:%.2f",p3.x,p3.y);
    return 0;
}
