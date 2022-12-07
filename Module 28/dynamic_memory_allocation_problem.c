#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;
    int* ptr = (int*) malloc(n*sizeof(int));
    printf("\n%p\n",ptr);

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else{
        for(int i=0;i<n;i++)
            scanf("%d",(ptr+i));
        for(int i=0;i<n;i++)
            printf("%d, ",*(ptr+i));
    }
    n=10;
    int* ptr2 = realloc(ptr,n*sizeof(int));
    printf("\n%p\n",ptr2);
    if(ptr==NULL)
    {
        printf("Allocation Failed");
    }
    else
    {
        for(int i=5;i<n;i++)
            scanf("%d",(ptr2+i));
        for(int i=0;i<n;i++)
            printf("%d, ",ptr2[i]);
    }
    free(ptr);
}
