/*

Pointer: A pointer is a varible which store the address of another variable. Simply, its a memory address.
Lets take a variable name phitron.
int phitron;
this phitron variable takes memory of four bytes.
Now we declare another variable.
int* phitron_ptr = &phitron;
phitron_ptr is declared as a pointer of integer. Here the memory address of phitron variable is stored in the pinter variable.



Difference Bet


*/

#include<stdio.h>
void increment_one(int* c)
{
    /*
    here the address of pointer c received, which is actually the address of count variable.
    */
    *c+=1; //the value of the address is being incremented by 1;
    //this function returns nothing, the value is changed on the taken address.
}
int main()
{
    int count=0;
    int* c_ptr = &count;
    increment_one(c_ptr);
    /*
    here on the incerement_one function, we passed the pointer variable c_ptr, which is actually the address of variable count. This is pass by reference. Here when the function will be called the address will be is passed.
    */
    printf("Count is: %d",count);
    return 0;
}
