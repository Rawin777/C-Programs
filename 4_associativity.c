#include <stdio.h>
// Always use Parenthesis
int main()
{
    int a=3;
    int b=6;
    int c=9;
    printf ("The value is %d\n", a*b/c); //Left to right Associativity
    printf("The value is %d", a*b/c*a);
    // a*b/c*a
    // 18/9*a
    // 2*a
    // 6
    return 0;
}