#include <stdio.h>

int main()
{
    int marks[]={34,45,39};
    for (int i=0; i<3;i++){
        printf("Value at index %d: %d\n",i,marks[i]);
    }
    return 0;
}