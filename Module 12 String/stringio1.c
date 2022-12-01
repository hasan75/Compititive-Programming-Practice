#include <stdio.h>
int main()
{
    char string[15]="Hasan Ahmed";
    string[10]='D';
    string[11]='\0';

    printf("%s",string);

    return 0;
}
