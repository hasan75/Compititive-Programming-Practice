#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    int len=0,i=0,len2=0,j=0;
    while(s1[i]!='\0'){
        len++;
        i++;
    }
    while(s2[j]!='\0'){
        s1[len+j]=s2[j];
        j++;
    }
    printf("%s",s1);
}

