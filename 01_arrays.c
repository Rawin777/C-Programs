#include <stdio.h>

int main()
{
    int marks[90]; // list with space for 90 integers
    marks[0] = 76;
    marks[1] = 98;
    printf("%d %d\n", marks[0], marks[1]);
    // We can go all the way to marks[89]. Hence range is (0,n-1)
    return 0;
}