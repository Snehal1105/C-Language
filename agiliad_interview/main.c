/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>
uint8_t y=0x39;

int main()
{

// uint32_t x = 0xAABBCCDD;
// uint8_t arr[4];
// memcpy(arr , &x, sizeof(arr));
// for(int i=0;i<4;i++)
// {
//     printf("arr[%d]  = %X\n",i,arr[i]);
// }




//Clear bits 0th bit and 4th bit of global variable without affecting other bits.
//uint8_t a=0x01;
y &= ~((1<<0) | (1<<4));
printf("%X\n",y);

//Set bits 0th bit and 4th bit of global variable without affecting other bits.
y |= ((1<<0) | (1<<4));
printf("%X\n",y);


/*
Raman Jamloki4:21 PM
4- I want to declare int pointers.

Will any of below two methods make any difference in outcome:
First
typedef int* INTPTR
INTPTR a,b

second
#define INTPTR int*
INTPTR a,b;
Raman Jamloki4:23 PM
5-
int *a,b;
vs
int *a,*b;
Raman Jamloki4:28 PM
6- There is a function whose address is known and signature is known.
signature: It does not return anything. It does not take any argument
Address- 0x20004004. 
Write a C code to call this function.
You4:31 PM
int *ptr =&fun;
means int *ptr =ox20004004;
void(*fun)()
{
}
*/
    return 0;
}




