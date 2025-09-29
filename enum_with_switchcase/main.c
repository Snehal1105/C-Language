/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef enum Calculator{
    Addition=1,
    Substrction,
    Multiplication
    };
    
int main()
{
    Calculator Choice;
    int a=5,b=8;
    printf("Enter a Choice : \n");
    printf("1. Addition\n2. Substrction\n3. Multiplication\n");
    //scanf("%s",Choice);
    gets(Choice);
    switch(Choice)
    {
        case Addition : printf("a+b=%d\n",a+b);
                 break;
        case Substrction : printf("a-b=%d\n",a-b);
                 break;
        case Multiplication : printf("a*b=%d\n",a*b);
                 break;
        default :
                 printf("Invalid Choice");
                 break;
        
    }

    return 0;
}
