/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   volatile unsigned int *ptr;   // pointer to fixed memory
    ptr = (volatile unsigned int *)0x12345678;  

    //*ptr = 0xAA;   // write data to that address

    unsigned int value = 0xAA;
    *ptr = value;
    printf("value=%x",*ptr);

    return 0;
}
