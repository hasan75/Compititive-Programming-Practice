#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    int len = strlen(word);
    int max=26;
    int arr[max+1];
    for(int i=0;i<=max;i++){
        arr[i]=0;
    }
    for(int i=0;i<len;i++){
        arr[(word[i]-'a')+1]+=1;
    }

    int total=0;
    for(int i=0;i<=max;i++){
        if(arr[i]>=1){
            total++;
        }
    }

    while(total!=0){
        int maxim=-1,index=-1;
        char c;
        for(int i=0;i<=max;i++){
            if(arr[i]>maxim){
                maxim=arr[i];
                index=i;
                c=i+'a'-1;
            }
        }
        for(int i=0;i<maxim;i++){
            printf("%c",c);
        }
        arr[index]=0;
        total--;
    }
}
