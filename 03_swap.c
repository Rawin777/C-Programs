#include <stdio.h>
void swap(int *, int *);
void swap(int *a, int *b) // The pointer variables will take the address of the arguments given later
{   // int i = 4; int *j = &i; j = &i; *j = i(value); <- And through this we know to make our function as well how to enter our arguments.
    // Note that the integer is 'i' is already introduced before the pointer is declared? That's because we account for the argument before hand to make sure that the function we are making is accurate and will work.
    int temp; // Introducing an empty variable for swapping should be obvious
    temp = *a; // the pointer gives the 'temp' value of 'a'
    *a = *b; // 'a' gets the value of 'b'
    *b = temp; // 'b' gets the value of a from 'temp'
}   // and the two values are swapped...

int main()
{
    int x = 3, y = 9;
    swap(&x, &y); 
    // Address of the variables which are going to have their values interchanged are required so that the pointer can point to the address which needs modification.
    printf("After switching the values of the two variables: x = %d and y = %d\n", x, y); 
    return 0;

}
