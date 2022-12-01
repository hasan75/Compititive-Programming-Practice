#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int X,minutes,to_charge;
        scanf("%d%%",&X);
        if(X < 60 ){
            to_charge = 100-X;
            minutes=20*3+20*2+(to_charge-40)*1;
        }
        else if(X>=60 && X<80){
            to_charge = 100-X;
            minutes = 20*3 + (to_charge-20)*2;
        }
        else if(X>=80){
            to_charge = 100-X;
            minutes = to_charge*3;

        }


        printf("%d minutes\n",minutes);
    }
}
