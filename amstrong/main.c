/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1=0,n2=1,num,numser;
    printf("enter the how many amstrong number you want to print:");
    scanf("%d",&num);
    printf("%d,%d",n1,n2);
    while(num!=0)
    {
    numser=n1+n2;
    num--;
    n1=n2;
    n2=numser;
    printf(",%d",numser);
    }

    return 0;
}