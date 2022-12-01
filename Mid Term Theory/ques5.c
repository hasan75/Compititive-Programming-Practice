#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    char ch = 'a';
    for(int i=0;i<8;i++)
    {
			a[i] = ch+8-i;
			printf("a[i]= %c ===  %c[%d]+8-%d --> %d\n",a[i],ch,ch,i, ch+8-i);
    }
    a[8] = '\0';

    printf("\n\n");

    for(int i=0;i<8;i++){
        printf("%c --> in index a[%d]\n",a[i],i);
    }

    puts(a);
}
