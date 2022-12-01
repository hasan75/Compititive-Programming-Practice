#include<stdio.h>


int get_size(char c[])
{
    int i=0,sz=0;
    while(c[i]!='\0')
    {
        sz++;
        i++;
    }
    return sz;
}
void str_reverse(char c[])
{
    int l = get_size(c);
    for(int i=0,j=l-1;i<(l/2);i++,j--)
    {
        char temp=c[i];
        c[i]=c[j];
        c[j]=temp;
    }
    printf("The Reversed string is: %s\n",c);

}
void solve(void)
{
    char c[100];
    scanf(" %s",c);
    str_reverse(c);
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}
