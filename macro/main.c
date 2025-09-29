/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define number (((num & 0x000000FF)<<24) | ((num & 0x0000FF00)<<8) |((num & 0xFF000000)>>24) | ((num & 0x00FF0000)>>8))
int main()
{
    int num=0x12345678;
    if((number & 0x000000FF) ==0x78)
    {
        printf("Little endian");
    }
    else{
    printf("Big Endian");
    }
    return 0;
}
