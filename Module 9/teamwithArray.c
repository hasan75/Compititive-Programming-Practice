#include<stdio.h>
int main()
{
    int n,i,numbers,solve=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int counter = 0,p;
        for(int j=0;j<3;j++){
            scanf("%d",&p);
            counter+=p;
        }
        if(counter>=2){
            solve+=1;
        }
    }
    printf("%d",solve);
}
