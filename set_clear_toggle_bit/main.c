/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=0x47;
    //a &= ~(1<<(Kth bit - 1));
    a &= ~(1<<6); //6th bit clear
    printf("%x\n",a);
    a=0x47;
    a |= (1<<3);  //3rd bit Set 
    printf("%x\n",a);
    a=0x47;
    a ^= (1<<2);  //2nd bit Toggle
    printf("%x",a);

//0100 0101
//0001 0000
    return 0;
}