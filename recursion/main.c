/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void update(int a);
int main()
{
    int a=1;
    //printf("Hello World");
    //main();   //Recursion without inial condition
    update(a);
    return 0;
}

 void update(int a)
 {
     if(a==0)
     {
        return 1; 
     }
    a++;
    printf("%d\n",a);
    update(a);
 }