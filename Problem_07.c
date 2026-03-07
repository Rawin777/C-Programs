// Try Problem 03 using the call by value and verify that it does not change the value of the said variable
#include <stdio.h>

int times_ten(int);
int times_ten(int a)
{
    a = a * 10;
}

int main()
{
    int i = 56;
    times_ten(i);
    printf("Variable value x 10 = %d\n", i);
    return 0;
}