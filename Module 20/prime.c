#include<stdio.h>

int is_prime(int x){

    int i;
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }

    for(i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,i;
    scanf("%d",&a);
    i = is_prime(a);

    if(i==1){
        printf("Prime\n");
    }
    else{
        printf("Composite\n");
    }
    return 0;
}

