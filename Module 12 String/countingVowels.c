#include <stdio.h>
int main()
{
    char string[1000];
    int count=0,i=0,consonent=0;
    fgets(string,sizeof(string),stdin);
    while(string[i]!='\0'){
        if(string[i]=='U' || string[i]=='O' || string[i]=='I' ||string[i]=='E' ||string[i]=='A' ||string[i]=='u' ||string[i]=='o' ||string[i]=='i' ||string[i]=='e' ||string[i]=='a'){
            count++;
        }
        else{
            consonent++;
        }
        i++;
    }
    printf("In the %s,\nNumber of Vowels are %d\nNumber of consonents are %d",string,count,consonent);
}
