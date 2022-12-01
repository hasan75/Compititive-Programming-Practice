#include<stdio.h>
#include<math.h>

int digit_sum(int x);
int seven_present(int x);
int last_dig_prime(int x);

int main(){
    int n;
    scanf("%d",&n);

    if(digit_sum(n)==1 && seven_present(n)==1 && last_dig_prime(n)==1)
    {
       printf("%d is a Farhan's Number\n",n);
    }
    else
    {
        printf("%d is not a Farhan's Number\n",n);
    }

    return 0;
}

int digit_sum(int x){
    int sum =0;
    while(x!=0){
        int a=x%10;
        sum+=a;
        x=x/10;

    }
    if(sum >10){
        return 1;
    }
    else{
        return 0;
    }
}

int last_dig_prime(int x){
    int last = x%10;

    if(last == 0 || last == 1){
        return 0;
    }
    else if(last == 2){
        return 1;
    }
    for(int i=2;i<= sqrt(x);i++)
    {
        if(x%i == 0){
            return 0;
        }
    }
    return 1;
}

int seven_present(int x){
    while(x>0){
        int a=x%10;
        if(a == 7){
            return 1;
        }
        x=x/10;
    }
    return 0;
}

