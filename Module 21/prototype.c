#include<stdio.h>
float maxx_number(float a,float b,float c);
int main()
{
    float a,b,c,i=0;
    while(i<5){
        scanf("%f %f %f",&a,&b,&c);
        float m= maxx_number(a,b,c);
        printf("Three numbers are: %f, %f, %f\nMaximum number is %f\n",a,b,c,m);
        i++;
    }

    return 0;
}

float maxx_number(float a,float b,float c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}


