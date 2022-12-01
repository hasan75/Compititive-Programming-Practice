#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    int i=0;
    int max=26; //for the letter 26
    int new[max+1],j=max;
    while(j>=0)
    {
        new[j]=0;
        j--;
    }
    i=0;
    while(word[i]!='\0'){
        new[(word[i]-'a')+1]+=1;
        i++;
    }
    int total=0;

    for(int i=1;i<=26;i++){
        if(new[i]>=1){
            total++;
        }
    }

    int next=0;

    while(next!=total)
    {
        int max=-1,index=-1;
        char ch;
        for(int i=1;i<=26;i++){
            if(new[i]>max)
            {
                max=new[i];
                ch=i+96;
                index=i;
            }
        }
        for(int i=0;i<max;i++){
            printf("%c",ch);
        }
        new[index]=0;
        next++;
    }



}

