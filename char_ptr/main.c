/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char value=127;
    char *ptr;
    ptr=&value;
    printf("adress of value : %p\n",&value);
    printf("value of value : %d\n",value);
    char data;
    data = *ptr;
    printf("value of data : %d\n",data);
     *ptr=94;
    // printf("value of value : %d\n",value);
    // *ptr=127;
    // printf("value of value : %d\n",*ptr);
    return 0;
}

