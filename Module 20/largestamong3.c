#include<stdio.h>
int check_largest(int x,int y,int z)
{
    if(x>y && x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int largest = check_largest(a,b,c);
    printf("The largest among %d %d %d is number is %d",a,b,c,largest);
    return 0;
}
