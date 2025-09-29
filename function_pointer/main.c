/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fun(int);
void main()
{
    int res;
    int (*ptr)(int); //declaration of function with pointer(replace function with pointer)
    ptr=&fun;        //assign function address to pointer 
    res = (*ptr)(10);  //call function using pointer(use pointer instead of function name)
    printf("res = %d",res);
}
int fun(int a)  //Write normal function
{
    a++;
    return a;
}