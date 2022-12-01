#include<stdio.h>

int is_vowel(char x)
{
    if(x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u' ||x=='A' ||x=='E' ||x=='I' ||x=='O' ||x=='U')
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    char ch;
    ch=getchar();
    getchar();

    if(is_vowel(ch)==1)
        printf("The Character is vowel\n");
    else
        printf("The Character is a consonent\n");
}
