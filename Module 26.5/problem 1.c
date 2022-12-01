#include<stdio.h>
void find_average(int* x, int* y,float* avg)
{
    *avg = (*x+*y)/2.0;

}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float average=0.0;
    find_average(&x,&y,&average);
    printf("%.3f",average);
}
