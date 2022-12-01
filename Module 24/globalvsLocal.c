#include<stdio.h>
int g=7;

void add()
{
    int a,b;
    int g=13;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d\n",sum);
    printf("G from the add is %d\n",g);
    g=g+2;
    printf("G from the add after adding 2 is %d\n",g);
    {
        extern int g;
        printf("Printing global scoped g in add %d\n",g);
    }
}

int main()
{
    add();
    printf("Print G in main %d\n",g);
    return 0;
}
