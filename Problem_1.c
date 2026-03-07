#include <stdio.h>
// Create an array of 10 numbers. Verify using pointer arithmetic pointer that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    if ((*ptr + 2) == 3)
    {
        printf("Yes (ptr+2) points to the third element of the array");
    }
    else
    {
        printf("No (ptr+2) doesn't points to the third element of the array");
    }
    return 0;
}