#include <stdio.h>

int sum(int, int);    // Function Prototype
int sum(int x, int y) // Function Definition
{
    printf("The sum is %d\n", x + y); // What function does...
    return x + y;                     // gives the sum function itself the value of x+y
}

int main()
{
    int a = 2, b = 3;
    sum(a, b); // Calling user defined function
    int a1 = 34, b1 = 66;
    sum(a1, b1);
    int c = sum(4, 7); // Function also got called hence will print 4 + 7
    printf("%d", c);   // Function's value x+y which is assigned to c will be printed
    return 0;
}