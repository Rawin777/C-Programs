#include <stdio.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee facebook [100];

    facebook[0].code = 1;
    facebook[1].code = 2;
    struct employee facebook[2] = {3, "Harry", 45000};
    return 0;
}