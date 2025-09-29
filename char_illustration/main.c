 /******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//A to B distance=160km, B to C distance = 40km 
//Calculate the distance bet A to C
#include <stdio.h>

int main()
{
    unsigned char DistanceAtoB=160;
    unsigned char DistanceBtoc=40;
    long long int a=10;
    void * add=(long long int)&a;
    
   printf("Distance from A to C is :%d\n",DistanceAtoB + DistanceBtoc);
    printf("size of a : %ld\n",sizeof(a)); //8
    printf("address of a :%p\n",&a);
    printf("address of a :%p\n",add);
    printf("MyVar : %d",MyVar);
    return 0;
}
