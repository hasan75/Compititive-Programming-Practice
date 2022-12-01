# include <stdio.h>

void func(int* x)
{
    *x = 80;
}
int main()
{

    int y = 50;
    func(&y);
    printf("%d\n", y);

    int x=3;
    printf("%d",&x);
    return 0;

}
