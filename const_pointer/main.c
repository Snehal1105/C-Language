/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    //const pointer
    int q= 1;
    int w=2;
    int *const ptr=&q;
    //ptr=&q;
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
  *ptr=5;
  printf("%d\n",q);
  printf("%p\n",&ptr);
  //ptr=&w;//error
  // *ptr=5; // error
  //q=5;
    return 0;
    
    
    
//     //pointer to const 
//     int q= 1;
//     int w=2;
//     const int *ptr;
//     ptr=&q;
//     printf("%d\n",*ptr);
//     printf("%p\n",ptr);
//   // *ptr=5; // error
//   ptr=&w;
//   printf("%d\n",*ptr);
//     printf("%p\n",ptr);
//     return 0;
    
    
    /*
    //cont pointer to const
  int q= 1;
    int w=2;
    const int *const ptr;
    ptr=&q;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
   // *ptr=5;// not possible
   ptr=&w;//not possible 
    return 0;
    */
    
    
}

