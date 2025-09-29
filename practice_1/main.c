/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct data{

    
};

int main()
{
    printf("size of empty structure = %ld\n",sizeof(struct data)); //0 byte
 int a=0x12345678;
 char *ptr;
 ptr=(char*)&a;
 if(*ptr==0x78)
 {
 printf("value at base address = %X\n",*ptr);
 printf("Lttle Endian");
 }
 else
 {
 printf("value at base address = %X\n",*ptr);
 printf("Big Endian");
 }
    return 0;
}
