#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[10];
} emp;

int main()
{
    emp e1;
    e1.code = 45;

    char e1_name[] = "Jamie";
    strcpy(e1.name, e1_name);

    emp *ptr = &e1;
    printf("%s\n", ptr->name);

    printf("%d\n", e1.code);
    printf("%s\n", e1.name);

    return 0;
}