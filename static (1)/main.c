 /******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fun(void);
int main()
{
fun();
fun();
    return 0;
}
void fun(void)
{
static int a=5;
a++;
printf("a=%d\n",a);
}
