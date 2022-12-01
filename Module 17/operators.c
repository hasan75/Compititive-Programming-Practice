#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,m,q,r;
    a=7;
    b=3;
    int x=3;
    c=a+b;
    d=a-b;
    m=a*b;
    q=a/b;
    r=a%b;
    printf("Summation = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nRemainder =%d\n",c,d,m,q,r);
    int p;
    p=pow(b,x);

    printf("Power = %d\n",p);


    float square_root;
    square_root = sqrt(49);
    printf("Square Root: %f\n",square_root);



    return 0;
}
