#include<stdio.h>
#include<math.h>
#include<string.h>
int check_int(char s[],int l,char one,char seven, char nine);

int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int l=strlen(s)-1,c1=0,c9=0,c7=0;
    int flag= check_int(s,l,'1','7','9');
    if(flag==1)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;

}

int check_int(char s[],int l,char one,char seven, char nine)
{
    int c1=0,c7=0,c9=0;
    for(int i=0;i<l;i++)
    {
        if(s[i] == one)
        {
            c1++;
        }
        else if(s[i]==seven)
        {
            c7++;
        }
        else if(s[i]==nine)
        {
            c9++;
        }
    }
    if(c1>0 && c7>0 && c9>0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
