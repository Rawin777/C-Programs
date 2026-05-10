#include <stdio.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1 = {45, "Harsh", 56000.00};

    struct employee *ptr;
    ptr = &e1;
    printf("%d", (*ptr).code);
    printf("%d", ptr->code);
    return 0;
}