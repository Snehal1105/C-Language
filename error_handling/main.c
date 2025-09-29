/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef enum{
    No_Error,
    Memory_Allocation_Failed,
    Timeout_Error,
    Hardfault,
    Buffer_Overflow,
}ErrorCodes;

void PrintError( ErrorCodes Err);

void PrintError( ErrorCodes Err)
{
    switch(Err)
    {
        case No_Error:                 printf("No_Error");
                                       break;
        case Memory_Allocation_Failed: printf("Memory_Allocation_Failed");
                                       break;
        case Timeout_Error:            printf("Timeout_Error");
                                       break;
        case Hardfault:                printf("Hardfault");
                                       break;
        case Buffer_Overflow:          printf("Buffer_Overflow");
                                       break;                      
    }
}
int main()
{
    int arr[10];
    
    for(int i=0;i<=10;i++)
    {
        if(arr[i]<10)
        {
            scanf("%d",&arr[i]);
        }
        else{
            PrintError(Buffer_Overflow);
            return Buffer_Overflow;
        }
    }
    

    return No_Error;
}
