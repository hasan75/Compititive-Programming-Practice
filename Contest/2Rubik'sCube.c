
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double N;
    scanf("%f",&N);
    if(N>=0)
    {
    double area;
    area = 6*(N*N);
    printf("%.0lf\n",area);
    }
    return 0;
}
