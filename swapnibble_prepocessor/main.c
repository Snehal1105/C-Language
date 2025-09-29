/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define SwapNibble(data) (((data & 0x0F)<<4) | ((data & 0xF0)>>4))
int main()
{
    int data=0x21;
    printf("%x",SwapNibble(data));

    return 0;
}