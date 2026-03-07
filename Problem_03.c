// Write a program to change the value of the variable to ten times its present value.
#include <stdio.h>

int times_ten(int *);
int times_ten(int *a) // int *a = &i; a = &i; *a = i(value);
{
    printf("Variable value x 10 = %d\n", 10*(*a));
}

int main()
{
    int i = -87;
    times_ten(&i);
    return 0;
}