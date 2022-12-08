#include<stdio.h>
struct Comp
{
    double real;
    double imag;
};

void print_comp(struct Comp c)
{
    printf("%0.3lf+%0.3lfi",c.real,c.imag);
}

struct Comp add_comp(struct Comp p, struct Comp q)
{
    struct Comp ans;
    ans.real = p.real+q.real;
    ans.imag = p.imag+q.imag;
    return ans;
};

struct Comp multiply(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real=a.real*b.real - a.imag*b.imag;
    ans.imag=a.real*b.imag + b.real*a.imag;
    return ans;
};

int main()
{
    struct Comp c1={5.9,3.1};
    struct Comp c2={-2.5,3,7};
    print_comp(c1);
    printf("\n");
    print_comp(add_comp(c1,c2));
    printf("\n");
    print_comp(multiply(c1,c2));

    return 0;
}
