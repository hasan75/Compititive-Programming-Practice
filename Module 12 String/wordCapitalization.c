#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    fgets(word,sizeof(word),stdin);
    if(word[0]>='a' && word[0]<='z'){
        word[0]-=32;
    }
    puts(word);
    return 0;
}
