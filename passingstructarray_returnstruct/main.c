/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct FeetInches{
    float feet;
    float inch;
};

struct Result{
    float FeetSum;
    float InchSum;
};

struct FeetInches FeetInchesVal[]={{1.2,3.5},{8.5,4.6},{4.7,8.4}};

struct Result SumofFeetsnInches(struct FeetInches *ptr,int);

int main()
{
   int size;

  size=sizeof(FeetInchesVal)/sizeof(FeetInchesVal[0]);
  
  struct Result sum = SumofFeetsnInches(FeetInchesVal,size);
  printf("Total Feet = %f,\tTotal inches = %f",sum.FeetSum,sum.InchSum);
   
    
    

    return 0;
}

struct Result SumofFeetsnInches(struct FeetInches *ptr,int size)
{
    
    struct Result res = {0, 0};
   for(int i=0;i<size;i++)
   {
      res.FeetSum+= (ptr+i)->feet;
      res.InchSum+= (ptr+i)->inch;
   }
   return (res);
}
