/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Access a 3rd and 4th byte
#include <stdio.h>

int main()
{
   int data=0x12345678;
  // Access a 3rd byte
//   char *ptr;
//   ptr = (char*)&data;
//  printf("%x",*(ptr+2)); //34
short *ptr;
ptr= (char*)&data;
printf("%x",*(ptr+1));
    return 0;
}

