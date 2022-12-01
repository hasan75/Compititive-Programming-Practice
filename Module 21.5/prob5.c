#include<stdio.h>
#include<math.h>
float operation(char a, int b,int c);
int main()
{
    char a;
    int b,c;
    scanf("%c",&a);
    scanf("%d %d",&b,&c);
    float op = operation(a,b,c);
    printf("%.2f\n",op);

    return 0;
}

float operation(char a, int b,int c)
{
    float res;
    if(a == '+')
    {
        res = b+c;
    }
    else if(a == '-')
    {
        res = b-c;
    }
    else if(a == '*')
    {
        res = b*c;
    }
    else if(a== '/')
    {
        res = b/c;
    }
    return res;
}
