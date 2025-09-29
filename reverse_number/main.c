/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=12345;
    int n,reverse=0;
    //printf("enter the number:");
    //scanf("%d",&num);
    
    while(num!=0)
    {
      n=num%10;
      reverse=n*10+n;
      num=num/10;
      
      {
          
      }
      printf("%d",n);
    }
    return 0;
}