#include <stdio.h>

int main()
{
    int i = 72;
    int *j= &i;
    printf ("i = %d\n",i);
    printf ("&i = %d\n",&i);
    printf("j = %d\n", j);
    printf("&j = %d\n", &j);
    printf("*j = %d\n", *j);
    int **k= &j;
    printf("**k = %d\n", **k);
    return 0;
}