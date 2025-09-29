/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Padding Structure
#include <stdio.h>
struct data {
    char ch;
    int d;
    char c;
};
int main()
{
    struct data People;
    char *ptr;
    ptr=(char*)&People;
    
    People.ch='S';
    People.d=10;
    People.c='A';
  
   // ptr->d=10;
    printf("Total size of structure : %ld\n",sizeof(People));
    
    //See How the data is stored in allignment in memory
    for(int i=0;i<sizeof(People);i++)
    {
    printf("Adress of structure = %p\n*ptr = %X\n",ptr,*ptr);
    ptr++;
    }
    
    

    return 0;
}

