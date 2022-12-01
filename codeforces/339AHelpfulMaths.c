#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int l= strlen(s);
    char s2[(l/2)+2];
    if(l>1)
    {
        for(int i=0,j=0;i<l;i+=2)
        {
            s2[j]=s[i];
            j+=1;

        }
        int len = strlen(s2);
        char temp;
        for(int j=0;j<len;j++){
            for(int k=0;k<len-1;k++){
                if(s2[k]>s2[k+1])
                {
                    temp= s2[k];
                    s2[k]= s2[k+1];
                    s2[k+1]=temp;
                }
            }
        }
        for(int m=0;m<len-1;m++){
            printf("\n%d is %c\n",m,s2[m]);
        }
        printf("\n%d is %c\n",len-1,s2[len-1]);
    }

    else
    {
        printf("%c",s[0]);
    }

    return 0;

}
