#include<stdio.h>
#include<math.h>
#include<string.h>
int check_int(char a);

int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int l=strlen(s)-1,c1=0,c9=0,c7=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]== '1')
        {
            c1++;
        }
        else if(s[i]=='7')
        {
            c7++;
        }
        else if(s[i]=='9')
        {
            c9++;
        }
    }
    if(c1>0 && c7>0 && c9>0)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;

}
