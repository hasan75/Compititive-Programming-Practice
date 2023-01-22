#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int N,S;
    scanf("%d %d",&N,&S);
    if(N>0 && N <=200 && S>0 && S<=500)
    {
        printf("%d\n",(S-N)/2);
    }
    return 0;
}

