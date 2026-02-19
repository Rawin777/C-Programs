#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a+b;
    printf("The value of a is %d and value of b is %d and value of c is %d\n", a,b,c);
    //Modulus is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n",a%b);
    //There's no Exponential sign in C, you have to use <Math.h> for that
    printf("The a^b=", a^b); 
    return 0;
}