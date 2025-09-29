/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fibonacci(int n);
int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d",&num);
    fibonacci(num); 
    return 0;
}
void fibonacci(int n)
{
    int num1=0,num2=1,seqsum;
    seqsum=num1+num2;
    printf("%d\t%d\t%d\t",num1,num2,seqsum);
    for(int i=4;i<=n;i++)
    {
        num1=num2;
        num2=seqsum;
    seqsum=num1+num2;
    
    if(seqsum>n)
    {
        break;
    }
    printf("%d\t",seqsum);
    }

}
