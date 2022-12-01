#include<stdio.h>
int maxx_number(int a,int b,int c){
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

int main()
{
    int a,b,c,i=0;
    while(i<5){
        scanf("%d %d %d",&a,&b,&c);
        int m= maxx_number(a,b,c);
        printf("Three numbers are: %d, %d, %d\nMaximum number is %d\n",a,b,c,m);
        i++;
    }

    return 0;
}
