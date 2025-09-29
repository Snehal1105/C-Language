/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int *foo(); 
int main()
{
  int *k=foo();
  (*k)++;
  printf("%d",*k);
}
int *foo()
{
    //Local variable should be static to return to the function
    static int y=9; // if we do not declare it as static then it becomes dangling pointer
    return (&y);
}