#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(int i=0;i<n;i++)
        printf("%d",ptr[i]);

    printf("And::\n");
    ptr= realloc(ptr,(n+5)*sizeof(int));
    for(int i=n;i<n+5;i++)
    {
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n+5;i++)
        printf("%dth is %d\n",i+1,ptr[i]);
    free(ptr);

    return 0;
}
