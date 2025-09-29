/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int add(int,int); //Declaration is same like normal function

int main()
{
    int result;
    int (*ptr)(int,int); // declare only function pointer
    ptr =&add;
    result = ptr(2,3);
    //result = add(2,3); //Calling is same like normal function
    printf("%d",result);
    

    return 0;
}
int add(int a,int b)  //definition is same like normal function
{
    int sum=0;
    sum = a+b;
    return sum;
    
}