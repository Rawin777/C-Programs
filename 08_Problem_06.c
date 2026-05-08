#include <stdio.h>

int main()
{
    char str[] = "I have a lot of work to do today";
    for (int i = 0; str[i] != '\0'; i++)
    {
        str [i]++;
    }
    printf("%s", str);
    
    return 0;
}