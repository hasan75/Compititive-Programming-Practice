#include<stdio.h>
#include<string.h>
int main()
{
    char name1[] = "farhanFeroz";
    char name2[] = "farhanferoZ";
    //strnlen
    int a = strnlen(name1,25);
    printf("%d\n",a);

    printf("%d\n",strcmp(name1,name2));

    printf("%d\n",strncmp(name1,name2,5));

    printf("%d\n",strcasecmp(name1,name2));

    char n1[]="Farhan";
    char n2[]=" Feroz";


    strncat(n1,n2,4);

    puts(n1);


    char n3[] = "Farhan";
    char n4[] ="Bangladesh";

    //strcpy(n3,n4);
    strncpy(n3,n4,5);
    n3[5]='\0';

    puts(n3);


    return 0;
}
