/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fun(void);
int globalvar=10;

int main()
{
    fun();
    return 0;
}
void fun()
{
    static int a=10;
    a++;
    printf("%d,%d\n",globalvar,a);
    //globalvar++;
    printf("%d,%d",globalvar,a);
    

   // return 0;
}