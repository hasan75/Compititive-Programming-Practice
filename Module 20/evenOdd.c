#include<stdio.h>
#include<math .h>
int prime_check(int x)
{
    if(x == 1){
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d",&a);
    int check = prime_check(a);
    if(check == 1){
        printf("%d is a prime number",a);
        return 0;
    }
    else{
        printf("%d is a not a prime number",a);
        return 0;
    }
}
