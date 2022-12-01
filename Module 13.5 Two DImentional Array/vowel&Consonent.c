#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    fgets(word,sizeof(word),stdin);
    int len = strlen(word)-1;
    int vowel=0,consonenet=0;
    for(int i=0;i<=len;i++){
        if(word[i]>='a' && word[i]<='z'){
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
                vowel+=1;
            }
            else{
                consonenet+=1;
            }
        }
    }
    printf("Vowel -%d\nConsonant -%d",vowel,consonenet);

    return 0;
}
