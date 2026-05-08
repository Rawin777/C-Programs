#include <stdio.h>

int main()
{
    int count = 0;
    char str[]="Hello nice to meet you";
    for (int i = 0; str[i]!='\0'; i++){
        if (str[i] == 'e'){
            count++;
        }
    }
    printf("Number of 'e' in the string are: %d\n", count);
    
    return 0;
}