// n= 5 -> 1 2 3 4 5;

#include<stdio.h>

int print_one_to_n(int n)
{
    if(n<1)
        return 0;
    print_one_to_n(n-1);
    printf("%d ",n);

}

int main()
{
    int n;
    scanf("%d",&n);
    print_one_to_n(n);

    return 0;
}
