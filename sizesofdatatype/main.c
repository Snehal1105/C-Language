/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("size of int=%ld\n",sizeof(int));  //4
    printf("size of long int=%ld\n",sizeof(long int)); //8
    printf("size of short int=%ld\n",sizeof(short int));//2
    printf("size of double=%ld\n",sizeof(double));//8
    printf("size of void=%ld\n",sizeof(void));//1
    

    return 0;
}