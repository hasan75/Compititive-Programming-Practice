#include<stdio.h>
#include <string.h>
int main()
{
    char word[1000];
    fgets(word, sizeof(word),stdin);
    int len = strlen(word)-1;
    char newWord[len+1];
    char a;
    for(int i=0;i<len;i++){
        int count =0;
        for(int j=0;j<len;j++)
        {
            if(word[i]==word[j] && i!=j){
                count++;
            }
        }
        if(a != word[i]){
        char a=word[i];
        newWord[count]=word[i];
        }
    }

    for(int i=0;i<len;i++){
        printf("%c in %d\n",newWord[i],i);
    }

}
