#include <stdio.h>

int main()
{
    char str[] = "J!ibwf!b!mpu!pg!xpsl!up!ep!upebz";
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i]--;
    }
    printf("%s", str);
    return 0;
}