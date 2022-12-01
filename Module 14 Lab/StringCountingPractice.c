#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    int l=strlen(word);
    int largest=26;
    char new[largest+1];
    for(int i=0;i<=largest;i++){
        new[i]=0;
    }
    for(int i=0;i<l;i++){
        new[word[i]-'a'+1]+=1;
    }

    int total=0;
    for(int i=0;i<=largest;i++){
        if(new[i]>=1){
            total++;
        }
    }
    int max,max_index;

    while(total!=0){

        max=new[0];
        max_index=0;
        char c;
        for(int i=0;i<=largest;i++){
            if(new[i]>max){
                max=new[i];
                c= i+'a'-1;
                max_index=i;
            }
        }
        for(int i=0;i<max;i++){
            printf("%c",c);
        }
        new[max_index]=0;
        total--;

    }
}
