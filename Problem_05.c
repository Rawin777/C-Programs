// Write a program using a function that calculates the sum and the average of two numbers. Use pointers and print the values of sum and average in main()
#include <stdio.h>

int sum_avg(int *, int *);
int sum_avg(int *x, int *y)
{
    printf("The sum of the two number is = %d\n", *x + *y);
    printf("The average of the two number is = %f\n", (*x + *y) / 2.0);
}

int main()
{
    int a = 5, b = 6;
    sum_avg(&a, &b);
    return 0;
}