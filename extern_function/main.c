/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//void func(void);
void funcall(void);
int main()
{
    funcall();
    return 0;
}

void func(void)
{
    int a=100;
    static int count;
    count++;
    printf("a=%d\n",a);
    printf("count = %d\n",count);
}