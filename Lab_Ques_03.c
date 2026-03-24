// Write a recursive program for tower of Hanoi problem
#include <stdio.h>
void hanoi (int n, char source, char helper, char destination){
    if (n==1){
        printf("Move disk 1 from %c to %c\n",source, destination);
        return;
    }
    hanoi (n-1, source, destination, helper);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    hanoi(n-1, helper, source, destination);
}

int main()
{
    int a;
    printf("Number of disks in the source: ");
    scanf("%d",&a);
    hanoi(a, 'A', 'B', 'C');
    return 0;
}