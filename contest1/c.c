#include<stdio.h>
#include<string.h>
int main()
{

    int T;
    scanf("%d",&T);
    while(T--){
        int N,h=0,t=0;
        scanf("%d",&N);
        char s[N+1];
        getchar();
        for(int j=0;j<N;j++){
            scanf("%c",&s[j]);
        }
        int l= strlen(s);
        for(int i=0;i<l;i++){
            if(s[i]=='H'){
                h++;
            }
            else if(s[i]=='T'){
                t++;
            }
        }
        if(h>t){
            printf("England\n");
        }
        else{
            printf("Pakistan\n");
        }
    }


    return 0;
}
