// Write a program to print the value of a variable 'i' by using "pointer to pointer" type of variable.
#include <stdio.h>

int main()
{
    int i = 2;
    int *j = &i;
    int **k = &j;
    printf ("value of variable i: %d\n", *j);
    printf ("value of variable i: %d\n", **k);
    return 0;
}