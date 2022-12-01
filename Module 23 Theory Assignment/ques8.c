#include<stdio.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int l= strlen(s)-1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<l;i++)
    {
        int asci = s[i]-96;
        if(asci+n<= 26)
        {
            printf("%c",s[i]+n);
        }
        else{
            int t = (asci+n)-26;
            printf("%c",'a'+t-1);
        }
    }
}
