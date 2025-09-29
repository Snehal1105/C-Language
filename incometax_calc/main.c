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
    // int a=8;
    // float b;
    // if(a<10)
    //  {
    //   printf("Hello World\n");
    //  }
    // else if(a==8)
    //  {
    //   printf("a=%d\n",a);
    //  }
    //  printf("Enter a input:\n");
    //  if(scanf("%f",&b))
    //  {
    //     printf("b=%f",b); 
    //  }
     
     
     uint32_t income=0;
     int8_t TaxRate=0;
     uint32_t TaxPay=0;
     printf("Enter a income:\n");
     scanf("%d",&income);
     if(income>800000)
     {
         TaxRate=12;
        TaxPay= (income*((float)TaxRate/100));
        printf("TaxPay=%d\n",TaxPay);
     }
     
    return 0;
}
