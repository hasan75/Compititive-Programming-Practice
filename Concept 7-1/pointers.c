#include<stdio.h>


int main()
{
    int value = 20;
    int* p =&value;
    printf("Address of value: %p\n",p);
    printf("Value of Value: %d\n",*p);

    int arr[5]={5,10,15,20,25};
    int *ptr = &arr;
    printf("%p\n",ptr);
    ptr++;
    printf("%p\n",ptr);
    ptr++;
    printf("%p\n",ptr);
    return 0;
}
