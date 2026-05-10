#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2;
    e1.code = 45;
    strcpy(e1.name, "Harry");
    e1.salary = 54000.46;
    printf("%d %f %s\n", e1.code,e1.salary, e1.name);
    
    return 0;
}