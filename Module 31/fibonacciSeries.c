/*
Steps to build a fibonacci series upto n terms using contiguous memory allocation:
1.We will declare a integer type variable n;
2.Take input of n;
3.We will declare a pointer variable ptr and assign a contiguous memory allocation which will be integer type.
4.if the pointer is null then we will print memory allocation failed message;
5.else we will set the first pointer address value to 0, second pointer address value to 1;
6.then we will take a for loop which will run from 2 to n-1,
7.in the for loop we will set the *(ptr+i) [the value of address ptr+i] to the summation of the previous two addresses values or *((ptr+i)-1)+*((ptr+i)-2);
8.We will take another for loop from 0 to n-1
9. In the for loop, we will print the output of (ptr+i) address with a comma if the i is less than (n-1).
10.When, i equals to n-1, the value will be printed without the comma.
11. After all operation, we will free the ptr pointer or memory allocation.

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr = (int*) calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        *(ptr)=0;
        *(ptr+1)=1;
        for(int i=2; i<n; i++)
            *(ptr+i)=*((ptr+i)-1)+*((ptr+i)-2);
        for(int i=0; i<n; i++)
        {
            if(i<(n-1))
                printf("%d, ",ptr[i]);
            else
                printf("%d\n",ptr[i]);
        }
    }
    free(ptr);
    return 0;
}
