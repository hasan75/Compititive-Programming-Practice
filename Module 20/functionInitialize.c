#include<stdio.h>
#include<string.h>

int myfrind(int x)
{
    printf("From Friend!\n");

    return 2*x ;
}
int main()
{
    //myfrind();
    int a = myfrind(5);
    printf("%d\n",a);

    return 0;
}
