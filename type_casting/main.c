/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define num 4
int main()
{
   //unsigned char data=0x34 + 0xFF01; //implicit type casting from 4 byte data to 1 byte data as constants are always 4 byte
   unsigned char data = (unsigned char)(0x34 + 0xFF01);
   unsigned long int data2 = (unsigned long int)(0x1234567891 + 0x1122);
   
   printf("size of a = %lu\n",sizeof(data));
   printf("data=%X\n",data); //0x34 + 0xFF01 = 0x35  //loss of data 
   
   printf("num=%d\n",sizeof(num));  //constants are always 4byte
   
   printf("size of a = %lu\n",sizeof(data2));
   printf("data=%X\n",data2); 
    return 0;
}

