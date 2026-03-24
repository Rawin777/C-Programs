// Write a program to find sum of a geometric series.
#include <stdio.h>
#include <math.h>

int main()
{
    int a,r,n;
    printf("Enter the first number of the series: \n");
    scanf("%d",&a);
    printf("Enter the common ratio of the series: \n");
    scanf("%d",&r);
    printf("Enter the number of terms in the series: \n");
    scanf("%d",&n);
    float Sn = a*(1-(pow(r,n)))/(1-r);
    printf("Sum of the Geometric Series is: %.2f\n", Sn);
    return 0;
}