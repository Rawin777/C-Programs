#include <stdio.h>

int main()
{
    int n = 0;
    char str[] = "Hello nice to meet you";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
        {
            printf("Yes 'a' is present in the string\n");
            n++;
            break;
        }
    }
    if (n == 0)
    {
        printf("No 'a' is not present in the string\n");
    }
    return 0;
}