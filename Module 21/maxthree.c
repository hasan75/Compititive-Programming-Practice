#include<stdio.h>

int max_of_three(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return x;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}
int main()
{
    int a,b,c;
    for(int i=0;i<10;i++){
        scanf("%d %d %d",&a,&b,&c);
        int m = max_of_three(a,b,c);
        printf("The maximum value is %d\n",m);
    }

    return 0;
}
