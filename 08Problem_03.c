#include <stdio.h>
#include <string.h>

int strlength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[] = "Hello";
    printf("Length of the string: %d\n", strlength(str));
    printf("Length of the string: %d\n", strlen(str));
    return 0;
}