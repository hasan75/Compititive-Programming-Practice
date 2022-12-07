#include<stdlib.h>
#include<math.h>
#include<stdio.h>

struct Point
{
    int x;
    int y;
};
int manhatten_distance(struct Point p, struct Point q)
{
    return abs(p.x-q.x)+abs(p.y-q.y);
}
int main()
{
    struct Point p1,p2;
    printf("Enter the first Co-ordinate:\n");
    scanf("(%d,%d)",&p1.x,&p1.y);
    printf("Enter the second Co-ordinate:\n");
    scanf("\n(%d,%d)",&p2.x,&p2.y);
    int distance = manhatten_distance(p1,p2);
    printf("The manhattan distance is %d\n",distance);

    return 0;
}
