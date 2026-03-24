// Wrtite a program to find the divisor or factorial of a given number.
#include <stdio.h>

int divisor(int a){
    for (int i = 1; i <= a/2; i++){
        if (a%i==0){
            printf("%d ",i);
        }
    }
    printf("%d",a);
}

int factorial(int x){
    int fact = 1;
    if (x == 0){
        return 1;
    }
    return fact=factorial (x-1) * x;
}
int main()
{
    int n;
    printf("Enter you number: ");
    scanf("%d",&n);
    printf("Factorial of the number: %d\n",factorial(n));
    printf("The divisors of the number are: ");
    divisor(n);
    return 0;
}
