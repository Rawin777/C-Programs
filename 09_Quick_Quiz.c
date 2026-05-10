#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;

    char e1_name[10];
    printf("Enter the name of employee e1:\n");
    scanf("%s", &e1_name);
    strcpy(e1.name, e1_name);

    printf("Enter the code of employee e1:\n");
    scanf("%d",&e1.code);

    printf("Enter the salary of employee e1:\n");
    scanf("%f",&e1.salary);
    
    printf("%d %f %s\n", e1.code,e1.salary, e1.name);
    
    return 0;
}