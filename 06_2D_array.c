#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value at [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }
    return 0;
}