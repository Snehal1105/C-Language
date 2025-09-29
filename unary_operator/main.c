/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int a=5;
    int b=4;
    int *ptr;
    ptr=&a;
    ptr++;
   // a++;
    //++a;
    printf("ptr=%d\n",*ptr);
    // printf("a=%d\n",a);
    // printf("b=%d\n",b++);
    // b=++a;
    // printf("b=%d\n",b);
    return 0;
}
