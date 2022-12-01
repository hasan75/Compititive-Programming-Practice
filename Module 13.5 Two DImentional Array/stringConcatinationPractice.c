#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    int len=0,i=0,j=0;
    while(s1[i]!='\0'){
        len++;
        i++;
    }
    while(j<len+strlen(s2)){
        s1[len+j]=s2[j];
        j++;
    }
    printf("%s",s1);
}
