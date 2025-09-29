/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[]="1234";
    int digit,sum=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        digit=str[i]-'0';
        sum=digit+sum;
    }
    printf("%d",sum);
    
    

    return 0;
}
