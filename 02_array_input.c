#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter marks of 5 students:\n");
    // scanf("%d\n",&marks[0]);
    // scanf("%d\n",&marks[1]);
    // scanf("%d\n",&marks[2]);
    // scanf("%d\n",&marks[3]);
    // scanf("%d\n",&marks[4]);
    // printf("Marks that you entered are: %d, %d, %d, %d and %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of Student %d is: %d\n", i + 1, marks[i]);
    }
    return 0;
}