#include <stdio.h>

int main()
{
    int arr[] = {45, 35, 49};
    int *p = &arr[0]; // or int *p = arr;
    for (int i = 0; i < 3; i++)
    {
        printf("The address of value %d is %d\n", *p, p);
        p++; // address doesn't move by '1' it moves to the next memory space. The memory space is determined by the data type and how much data it takes, Here we can see that an integer takes about 4 bytes.
    }
    return 0;
}