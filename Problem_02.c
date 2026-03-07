// Write a program having a variable 'i'. Print the address of the 'i'. Pass this variable to a function and print it's address. Are these addresses same? Why?
#include <stdio.h>

void address(int*);
void address(int* a) // int *a = &i; >[a = &i]< ; *a = i;
{
    printf("Value of the variable: %d\n", *a);
    printf("Adrress of the variable: %d\n", a);
}

int main()
{
    int i = 5;
    printf("Address of the variable: %d\n", &i);
    address(&i);
    return 0;
}
// Ans: Yes the address will be the same when pointers are used.