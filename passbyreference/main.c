// C program to demonstrate that we can change
// local values of one function in another using pointers.

#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("In swap Function: %p %p\n", x, y); //address of x and y
    printf("In swap Function address: %p %p\n", &x, &y); // address of pointer
}

int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    printf("In main Function: %p %p\n", &x, &y);//address of x and y
    printf("%d %d\n", x, y);
    return 0;
}