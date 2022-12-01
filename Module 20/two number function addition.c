#include<stdio.h>
#include<string.h>

int myfrind(int x,int y)
{
    printf("From Friend!\n");

    return x+y ;
}
int main()
{
    int a,b;
    //myfrind();
    a = myfrind(10,20);
    printf("%d\n",a);

    //myfrind();
    b = myfrind(20,20);
    printf("%d\n",b);

    return 0;
}
