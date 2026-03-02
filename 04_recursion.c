#include <stdio.h>

int factorial(int);

int factorial (int a){
    // factorial(a) = a * factorial (a-1);
    if (a ==0 || a==1){
        return 1;
    }
    return factorial (a-1) * a;
}
int main()
{
    int n = 4;
    // printf("Enter your number:\n");
    // scanf("%d",&n);
    printf("The factorial of %d is %d\n", n, factorial (n));
    return 0;
}