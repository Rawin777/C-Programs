// Write a program to print the address of a variable. Use this address to get the value of the variable.
#include <stdio.h>

int main()
{
    int i = 10;
    int *j = &i;
    printf("Address of the variable i: %p\n", j);
    printf("Value of the variable i: %d\n", *j);
    return 0;
}