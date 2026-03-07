#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter certain values:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Address of index %d is: %d\n", i, &arr[i]);
    }
    return 0;
}