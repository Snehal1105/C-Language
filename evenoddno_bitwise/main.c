/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
int main()
{
    int8_t num;
    printf("Enter a number");
    scanf("%hhd",&num);
    
    if(((num & 0x01)==1))
    {
        printf("Odd");
    }
    else{
        printf("Even");
    }

    return 0;
}

