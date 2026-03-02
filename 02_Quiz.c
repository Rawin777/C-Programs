#include <stdio.h>

void gm(void) , ga(void) , gn(void);

void gm(void){
    printf("Good Morning\n");
}

void ga(void){
    printf("Good Afternoon\n");
}

void gn(void){
    printf("Good Night\n");
}

int main()
{
    gm();
    ga();
    gn();
    return 0;
}