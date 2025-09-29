/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
void ReverseString(const char *,int);
int main()
{
    char str[]="Hello World";
    int size;
    size=strlen(str);
    printf("String Size=%d\n",size);
    ReverseString(str,size);
  
    return 0;
}

void ReverseString(const char *str,int size)
{
   
   if(size==0)
   {
       return;
   }
   
      printf("%c", str[size - 1]);
      ReverseString(str,size-1);
}


