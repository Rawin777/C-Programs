#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}vector;

int main()
{
    vector v1 = {1,2};
    printf("The value of vector is %di + %dj\n", v1.i,v1.j);
    
    return 0;
}