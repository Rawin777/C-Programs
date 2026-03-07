#include <stdio.h>
int sum(int *, int *);
int sum(int *a, int *b)
{
    *a = 6;
    return *a + *b;
}

int main()
{
    int x = 2, y = 3;
    printf("The sum is: %d\n", sum(&x, &y));
    printf("the value of x is: %d\n", x);
    return 0;
}