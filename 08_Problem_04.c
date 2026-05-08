#include <stdio.h>
#include <string.h>

char *slice(char str[], int m, int n){
    char *ptr1 = &str[m]; // points to str[m] meaning the string starts from that point for ptr1
    char *ptr2 = &str[n]; // points to str[n]
    str = ptr1;
    str[n] = '\0'; // And this makes the string end at str[n]
    return str;
}

int main()
{
    char str[] = "Hello my friends";
    printf("%s", slice(str, 1, 5));
    return 0;
}