/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int var = 0x1234;
    static int OnesCount,ZerosCount;
    var = (((var & 0x00FF)<<8) | ((var & 0xFF00)>>8));
    
    for(int i=0;i<15;i++)
    {
        if((var >> i) & 1)
        { 
            OnesCount++;
        }
    }
    ZerosCount = 16 - OnesCount;
    printf("Swapped Nibble Var : %x\n OnesCount = %d\n ZerosCount = %d\n",var,OnesCount,ZerosCount);
    

    return 0;
}