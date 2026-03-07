#include <stdio.h>

int times_ten(int *);
int times_ten(int *a) // This is passing the reference
{
    printf("Variable value x 10 = %d\n", 10*(*a));
}

int main()
{
    int i = -87;
    times_ten(&i);
    return 0;
}