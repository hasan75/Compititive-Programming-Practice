/*
Recursions:
i) Print from 1 to n;
ii) Print from n to 1;
iii)Reverse using recirsion
iv)SUm of n integers
v) Recursion with Array-i
vi) Recursion with Array-ii

*/

#include<stdio.h>
int recur_print(int n)
{
    if(n<1)
        return 0;
    printf("%d ",n);
    recur_print(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    recur_print(n);

    return 0;

}
