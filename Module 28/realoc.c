#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr=(int*) malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed");
    }
    else
    {
      for(int i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        for(int i=0;i<n;i++)
        {
            printf("%dth position is %d\n",ptr[i]);
        }
        ptr = realloc(ptr,(n+5)*sizeof(int)); //this will re allocate the array with extra 5 address.
        free(ptr);

    }

    return 0;
}
