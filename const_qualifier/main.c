/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
//flash memory is write protected so pointer cant apply on global const
int8_t const a=5;  //Stored in ROM/Flash
int main()
{
    /* Local const
    int8_t const a=5;   //sored in RAM
   // a=10;  //not possible
   int8_t *ptr;
   ptr=&a;
   *ptr=10;
   */
   int8_t *ptr;
   ptr=&a;
   *ptr=10;
    printf("a=%d",a);

    return 0;
}
