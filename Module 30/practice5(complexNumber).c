#include<stdio.h>
struct Complex
{
    double real;
    double imgry;
};
void print_number(struct Complex a)
{
    printf("%.3lf+%.3lfi\n",a.real,a.imgry);
}

struct Complex add_complex(struct Complex b, struct Complex c)
{
    struct Complex add_ans;
    add_ans.real = b.real+c.real;
    add_ans.imgry = b.imgry+c.imgry;
    return add_ans;
};

struct Complex mul_complex(struct Complex e, struct Complex f)
{
    struct Complex mul_ans;
//    printf("%lf %lf\n",e.real,e.imgry);
//    printf("%lf %lf\n",f.real,f.imgry);
//    printf("%.3lf\n",(e.real*f.real));
//    printf("%.3lf\n",(e.imgry*f.imgry));
//    printf("%.3lf\n",(e.real*f.imgry));
//    printf("%.3lf\n",(e.imgry*f.real));
    mul_ans.real = (e.real*f.real)-(e.imgry*f.imgry);
    mul_ans.imgry = (e.real*f.imgry)+(e.imgry*f.real);
    return mul_ans;
};
int main()
{
    struct Complex num1={.real=3,.imgry=-2},num2={.real=-4,.imgry=3};
    print_number(num1);
    print_number(num2);
    printf("The addition of them: \n");
    print_number(add_complex(num1,num2));
    printf("The Multiplication of them: \n");
    print_number(mul_complex(num1,num2));

    return 0;
}
