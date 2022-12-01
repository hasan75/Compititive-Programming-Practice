#include<stdio.h>
int num=1;
void print_one_to_n(int n)
{
    if(num>n)
    {
        return;
    }
    printf("%d ",num);
    num++;
    print_one_to_n(n);

}

int main()
{
    int n;
    scanf("%d",&n);
    print_one_to_n(n);
}
