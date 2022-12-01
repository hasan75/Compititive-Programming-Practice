#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    fgets(word,sizeof(word),stdin);
    int length = strlen(word)-1;
    int not=0;
    for(int i=0,j=length-1;i<=length-1;i++,j--){
            if(word[i]!= word[j]){
                not+=1;
            }
    }

    if(not==0){
        printf("YES");
    }
    else{
        printf("No");
    }

}
