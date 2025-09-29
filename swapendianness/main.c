/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Data=0x12345678;
//Little Endian = LSB First
//Big Endian = MSB First


#include <stdio.h>
#define SwapEndianness(data) (((data & 0x000000FF)<<24) |((data & 0x0000FF00)<<8) | ((data & 0xFF000000)>>24) | ((data & 0x00FF0000)>>8))
int main()
{
    int data=0x12345678;
    
    printf("%x",SwapEndianness(data));

    return 0;
}
