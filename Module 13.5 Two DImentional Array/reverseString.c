#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%s",s1);
    int len=0,i=0;
    while(s1[i]!='\0'){
        len++;
        i++;
    }
    i=0;
    for(i=len-1;i>=0;i--){
        printf("%c ",s1[i]);
    }
    return 0;
}
