/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
int main()
{
    
     int8_t i;
     uint8_t EvenCount=0,OddCount=0;
     int8_t StartNum,EndNum;
     printf("Provide the starting and ending of numbers:\n");
     scanf("%hhd %hhd",&StartNum,&EndNum);
     i=StartNum;
    while(i>=StartNum && i<=EndNum)
    {
      if(i%2==0)
      {
          EvenCount++;
          printf("%d\t",i);
          
      }
      i++;
    }
    printf("count = %d\n",EvenCount);
    i=StartNum;
    while(i>=StartNum && i<=EndNum)
    {
      if((i%2!=0))
      {
          OddCount++;
          printf("%d\t",i);
          
      }
      i++;
    }
    printf("count = %d",OddCount);
    return 0;
}
