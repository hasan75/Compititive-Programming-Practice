#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    int i=0,j;
    int max=(word[0]-'a')+1;
    while(word[i]!='\0'){
        int converted = (word[i]-'a')+1;
        if(converted >max){
            max= converted;
        }
        i++;
    }
    int newWord[max+1];
    for(int i=0;i<=max;i++){
        newWord[i]=0;
    }
    i=0;
    while(word[i]!='\0'){
        newWord[(word[i]-'a')+1]+=1;
        i++;
    }
    for(int i=max;i>=0;i--){
        if(newWord[i]!= 0 )
        {
            printf("%d in %d --> %c=%d\n",newWord[i],i,(i+'a'-1),(i+'a'-1));
        }
    }

    return 0;

}
