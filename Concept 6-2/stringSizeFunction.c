#include<stdio.h>
#include<stdbool.h>
int size(char s[])
{
    int size=0,i=0;
    while(s[i]!='\0')
    {
        size++;
        i++;
    }
    return size;
}

bool check_even_odd(int size)
{
    if(size%2)
    {
        return false;
    }
    return true;
}

void solve(void)
{
    char s[100];
    scanf(" %s",s);

    int s_size = size(s);
    printf("Size of %s is %d\n",s,s_size);

    bool is_even = check_even_odd(s_size);
    if(is_even)
        printf("String size %d is a even number\n",s_size);
    else
        printf("String size %d is odd\n",s_size);
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
