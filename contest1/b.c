#include<stdio.h>
#include<string.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>=0 && x<=250 && y>=0 && y<=250){
       printf("%d",x-y);
    }
    return 0;
}
