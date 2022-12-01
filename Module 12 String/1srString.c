#include <stdio.h>
int main()
{
    char name[15];
    scanf("%s",name);

    printf("Name is %s\n",name);

    char second_name[15]="Farhan Feroz";
    second_name[12]='X';
    second_name[13]='\0';
    printf("%c\n",second_name[12]);

    return 0;
}
