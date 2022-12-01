#include<stdio.h>
#include<math.h>
int factorial(int a);
float fact_ratio(int a,int b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float ratio = fact_ratio(a,b);
    printf("The ratio of %d! and %d! is: %.5f\n",a,b,ratio);
    return 0;

}

int factorial(int a)
{
    int res=1;
    for(int i=a;i>0;i--)
    {
        res*=i;
    }
    return res;
}

float fact_ratio(int a,int b)
{
    return factorial(a)/factorial(b);
}
