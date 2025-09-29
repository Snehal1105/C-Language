/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[15];
    int id;
}emp;
int main()
{
    strcpy(emp.name,"Snehal");
    //struct employee emp = {"Snehal",123};
    printf("%s",emp.name);

    return 0;
}