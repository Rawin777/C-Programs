#include <stdio.h>
#include <string.h>

char* stringcpy(char target[], char source[]){
    int i = 0; 
    while (source[i]!='\0'){
        target[i] = source [i];
        i++;
    }
    target[i]='\0';
    return target;
}

int main()
{
    char source[]= "Hello";
    char target[30];
    //strcpy(target,source); printf("%s",target);
    printf("%s",stringcpy(target, source));
    
    return 0;
}