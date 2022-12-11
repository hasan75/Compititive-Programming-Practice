#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of your array: ");
    scanf("%d",&n);

    int* ptr = (int*) malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        printf("\nEnter your array: \n");
        for(int i=0; i<n; i++)
            scanf("%d",(ptr+i));
        printf("\nYour  array is: \n");
        for(int i=0; i<n; i++)
            printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}
