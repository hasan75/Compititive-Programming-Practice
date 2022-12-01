#include<stdio.h>
#include<math.h>
float func(int a,int b);
int absolute(int a);
int square(int b);

int main()
{
    int x=12,y=7;
    float ans = func(x,y);
    printf("Answer of the function is: %f",ans);
    return 0;
}

float func(int a,int b){
    int temans = absolute(a-3)+ square(b+4);
    return sqrt(temans);
}

int absolute(int x)
{
    if(x>=0){
        return x;
    }
    else{
        return (-1)*x;
    }
}

int square(int b){
 return pow(b,2);
}
