/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
     // Define a pointer to an unsigned char (byte)
    char *memory_location;

    // Assign the memory address you want to write to
    memory_location = (char*)0x1234567812345678; // Replace with your desired address
    printf(" memory_location : %p\n ",memory_location);
    //printf(" Data at memory_location : %lld\n ",*memory_location);
    // Write a byte of data to the memory location
    *memory_location = 0xAA;
    printf(" Data at memory_location : %c\n ",*memory_location);
    // You can read from the same location to verify the write
    char value = *memory_location;

    // Print the value at the memory location
    printf("Value at memory location 0x1234567812345678: %x\n", value); 

    return 0;
}
