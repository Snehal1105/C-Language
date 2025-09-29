/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define Swap(x,y) ((x+y)-x),((x+y)-y) 
int main()
{
    int x=50,y=90;
    printf("x=%d\ny=%d",Swap(x,y));

    return 0;
}